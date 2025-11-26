#!/usr/bin/env python3
from __future__ import annotations
from arlo_gp_controller.gp.ruleSet import RuleSet
from arlo_gp_controller.gp.rule import Rule
from arlo_gp_controller.gp.gpNode import Node
from pprint import pprint
from arlo_gp_controller.gp.trayectorias import controlarRobotObstaculo as controlarRobot, callbackObstaculo as callback, turnLeft
import message_filters
from sensor_msgs.msg import LaserScan
import random

from ament_index_python.packages import get_package_share_directory
import os 


""" Note: currently, program only returns one of the actuator values needed for Gazebo and ROS
    In the future, this will need to change in evaluateTree method. Instead of returning self.reaction
    as a single variable, it will need to return list, or vector, of size 2 with actuator values 
    for use in simulation
    Change return value of evaluateTree method
"""

from std_msgs.msg import Float32MultiArray

# funcion para leer MP (bumpers)
def leer_memoriaP(nombreArchivo):
    rutaDirectorio = get_package_share_directory('arlo_gp_controller')
    rutaArchivo = os.path.join(rutaDirectorio, 'gp', nombreArchivo)
    # lista de bumpers
    bumpers = []
    
    with open(rutaArchivo) as f:
        for line in f:
            # para quitar espacios, saltos de linea
            line = line.strip()
            # si no esta vacia y si hay un =
            if line:
                bumpers.append(line)
    return bumpers
    

# funcion para leer archivo de MLP
def leer_memoriaLP(nombreArchivo):
    rutaDirectorio = get_package_share_directory('arlo_gp_controller')
    rutaArchivo = os.path.join(rutaDirectorio, 'gp', nombreArchivo)

    diccionarioDatos={}
    with open(rutaArchivo) as f:
        for line in f:
            # para quitar espacios, saltos de linea
            line = line.strip()
            # si no esta vacia y si hay un =
            if line and '=' in line:
                clave, valor = line.split('=')  # separar
                diccionarioDatos[clave] = float(valor)
    return diccionarioDatos  

# funcion para leer MM
def leer_memoriaM(nombreArchivo):
    rutaDirectorio = get_package_share_directory('arlo_gp_controller')
    rutaArchivo = os.path.join(rutaDirectorio, 'gp', nombreArchivo)
    
    diccionarioAcciones={}
    diccionarioReaccion={}
    
    with open(rutaArchivo) as f:
        for line in f:
            # para quitar espacios, saltos de linea
            line = line.strip()
            # si no esta vacia y si hay un =
            if line and '=' in line:
                clave, valor = line.split('=')
                valorSeparado = [i.strip() for i in valor.split(',')]
                
                accion = float(valorSeparado[0])
                diccionarioAcciones[clave] = accion
                
                # cuando sea por ejemplo 3,0.0, 0.0
                if len(valorSeparado) == 3:
                    articulacion1 = float(valorSeparado[1])
                    articulacion2 = float(valorSeparado[2])
                    diccionarioReaccion[accion] = [articulacion1, articulacion2]
                else:
                    print("Linea invalida")
                
    return diccionarioAcciones, diccionarioReaccion
    
    
class Tree:
    ros_node = None

    rules={}
    
    # diccionario
    symTable={}
    #indices={}

    initialSymb = "S"
    root:Node = None
    depth = 0
    reaction = None
    aptitud = None
    
    def setRosNode(self, ros_node):
        self.ros_node = ros_node


    def __init__(self)->Tree:
        self.reaccion = {}
        # leer archivos
        # reacciones se guardan en self.reaccion
        memoriaMotora, self.reaccion = leer_memoriaM("memoriaMotora.txt")
        
        # en self.sensores lista de nombres de bumper
        self.sensores = leer_memoriaP("memoriaPerceptiva.txt")
        memoriaLargoPlazo= leer_memoriaLP("memoriaLargoPlazo.txt")
                
        # agrega clave/valor de las memorias en symTable
        # se cargan una sola vez
        self.symTable.update(memoriaMotora)
        self.symTable.update(memoriaLargoPlazo)
        
        for nombre_bumper in self.sensores:
            self.symTable[nombre_bumper] = 0.0
        
        
        #ROS atributes
        # server = rospy.Service('actuator_values',ActuatorValuesService, handler=self.handleEvaluateTree)
        self.depth=0 #TODO: update value when creating tree
        self.initialSymb="S"
        #Lista de simbolos de la regla
        S = RuleSet("S")
        S.addNonTerminalRule(Rule("SiOtro", ("ER", "S", "S") ) )
        S.addTerminalRule(Rule("Brazo,Parar", ("Brazo,Parar")))
        S.addTerminalRule(Rule("Brazo,Avanzar1", ("Brazo,Avanzar1")))
        S.addTerminalRule(Rule("Brazo,Avanzar2", ("Brazo,Avanzar2")))
        S.addTerminalRule(Rule("Brazo,Avanzar3", ("Brazo,Avanzar3")))
        S.addTerminalRule(Rule("Brazo,VueltaDerecha", ("Brazo,VueltaDerecha")))
        S.addTerminalRule(Rule("Brazo,VueltaIzquierda", ("Brazo,VueltaIzquierda")))

        self.rules["S"]= S

        #reglas de expresion relacional
        ER = RuleSet("ER")
        ER.addNonTerminalRule(Rule("<=", ("E","E")))
        ER.addNonTerminalRule(Rule("==", ("E","E")))
        self.rules["ER"] = ER

        #Reglas para expresiones
        E = RuleSet("E")
        E.addTerminalRule(Rule("Brazo,d1", ("Brazo,d1")))
        E.addTerminalRule(Rule("Brazo,d2", ("Brazo,d2")))
        E.addTerminalRule(Rule("Brazo,d3", ("Brazo,d3")))
        E.addTerminalRule(Rule("Brazo,Bumper_Palma", ("Brazo,Bumper_Palma")))
        E.addTerminalRule(Rule("Brazo,Bumper_Antebrazo", ("Brazo,Bumper_Antebrazo")))
        self.rules["E"]=E

        # self.symTable["d1"] = D1
        # self.symTable["d2"] = D2
        # self.symTable["d3"] = D3
        # self.symTable["Parar"] = PARAR1
        # self.symTable["Avanzar1"] = AVANZAR1
        # self.symTable["Avanzar2"] = AVANZAR2
        # self.symTable["Avanzar3"] = AVANZAR3
        # self.symTable["Vuelta"] = VUELTA

    def __createTree(self,maxDepth=None, symbol='', bias=0.5, parent:Node=None) -> Node:
        node = None
        rset = self.rules[symbol]
        cutTree = self.__flip(bias)
        if maxDepth == None: return None

        if ((maxDepth <= 0 and rset.numTerminals() > 0) or
        (cutTree and rset.numTerminals() > 0) or
        rset.onlyTerminals()):

            #get random terminal rule from symbols
            r= rset.Terminals[ self.__randInt(rset.numTerminals())]
            node = Node(info=r.ruleName,arity=0,parent=parent)
        else: 
            # maxDepth != 0 or only has NT, For sure has NT and flip is false
            # choose random NT rule from symbol
            r= rset.NonTerminals[ self.__randInt(rset.numNonTerminals())]
            node = Node(r.ruleName,r.numSymbols(),parent=parent)

            for i in range(r.numSymbols()):
                node.setChild(i, self.__createTree(maxDepth-1, r.members[i], bias, parent=node))

        return node

    def __flip(self, bias) -> bool:
        rnd = random.uniform(0.0,1.0)
        if rnd > bias: return True
        else: return False

    def __randInt(self, limit) -> int:
        return random.randint(0,limit-1)

    
    def __evaluateTree(self, root:Node) -> float:
        #print("Evaluando nodo:", root.info, "| Terminal:", root.isTerminal())

        if root.isTerminal(): 
            return self.symTable[root.info]
        else:
            if root.info == "SiOtro":
                testValue = self.__evaluateTree(root.getChild(0))
                branchVal = None
                if testValue == 1.0:
                    branchVal = self.__evaluateTree(root.getChild(1))
                else: 
                    branchVal = self.__evaluateTree(root.getChild(2))
                return branchVal

            else:
                leftVal = self.__evaluateTree(root.getChild(0))
                rightVal = self.__evaluateTree(root.getChild(1))
                return self.__apply(root.info, leftVal, rightVal)


    def __apply(self, op, v1,v2) -> float:
        if op == "<="   : return 1.0 if v1 <= v2 else 0.0
        elif op == "<"    : return 1.0 if v1 < v2 else 0.0
        elif op == "=="   : return 1.0 if v1 == v2 else 0.0
        elif op == "+"    : return v1 + v2
        elif op == "*"    : return v1*v2
        else: 
            print("[Apply] Unknown Operator")
            return 0.0

    def __showTree(self,root:Node, level, spaces=None):
        if root != None: 
            if root.isFunction(): 
                print("")
                if spaces == None:print("\t"*level,end = '')
                else: print(" "*(int(spaces)*level),end = '')
                print("( ",end = '')
            
            print(" ",root.info, end=' ')
            
            for i in range(root.getArity()):
                self.__showTree(root.getChild(i), level+1)
            
            if root.isFunction(): print(" )",end = '')

    def createTreeFull(self, maxDepth) -> Node:  
        self.root = self.__createTree(maxDepth, self.initialSymb, 1.0)
        self.depth = maxDepth
        return self.root

    def createTreeGrow(self, maxDepth) -> Node:
        self.root = self.__createTree(maxDepth, self.initialSymb, 0.5)
        self.depth = maxDepth
        return self.root
        
    def evaluateTree(self, bumper_palma:bool, bumper_antebrazo:bool):
        print("\n--- Evaluando árbol ---")
        
        # para que lea del archivo los nombres de los bumpers
        valores_bumpers = [bumper_palma, bumper_antebrazo]
        for nombre_bumper, valor_bool in zip(self.sensores,valores_bumpers):
            self.symTable[nombre_bumper] = 1.0 if valor_bool else 0.0
        
        resp = self.__evaluateTree(self.root)
        print("Respuesta del árbol:", resp)
        
        # si resp(numero) coincide con alguna de la MM
        if resp in self.reaccion:
            accion = self.reaccion[resp]
            
            if isinstance(accion, list):
                # lista de posiciones
                self.reaction = accion
            elif isinstance(accion, str):
                self.reaction = [0.0, 0.0]
            else: 
                self.reaction = [0.0, 0.0]
        else:
            self.reaction = [0.0, 0.0]
        return self.reaction
    
    def showTree(self, spaces=None):
        self.__showTree(self.root, 0, spaces)
        print("\n")
        
    def showSymTable(self):
        pprint("Symbol Table:")
        pprint(self.symTable)

    #TODO: fix bug in mutate concerning arity
    def __mutate(self,root:Node,pm):
        """ Recorre todo el arbol y en cada nodo si el numero aleatorio es 
            menor o igual a pm, probabilidad de mutación"""
        if root != None and random.random() <= pm:
            # print(root.info, self.rules["S"].Terminals[0].ruleName)
            lvl = random.randint(1,8)
            for key in self.rules:
                rset = self.rules[key]
                if root.info in rset.getRuleset():
                    #make new branch
                    cutTree = self.__flip(0.5)
                    if (cutTree and rset.numTerminals() > 0 or
                        rset.onlyTerminals()):
                        r = rset.Terminals[ self.__randInt(rset.numTerminals())]
                        root.info = r.ruleName
                        root.arity = 0 #r.numSymbols()
                        root.children = []
                        # print ("Mutate:",key,root.info,root.arity)
                    else: 
                        r = rset.NonTerminals[ self.__randInt(rset.numNonTerminals())]
                        root.info = r.ruleName
                        root.arity = r.numSymbols()
                        root.children = [None]*root.arity
                        for i in range(r.numSymbols()):
                            root.setChild(i, self.__createTree(lvl, r.members[i], 0.5))
                        # print ("Mutate:",key,root.info)
                        return root
                else: 
                    for child in root.children:
                        self.__mutate(child,pm)

    #TODO: change to copy info from node
    def __copyTree(self,root:Node,new_parent:Node=None)->Node:
        new_node = root.copyNode(new_parent)
        for i in range(len(root.children)):
            new_node.children[i]=self.__copyTree(root.children[i], new_node)
        return new_node

    def copyTree(self)->Tree:
        new_tree = Tree()
        new_tree.root = self.__copyTree(self.root)
        new_tree.depth = self.depth
        return new_tree

    #node array in pre order
    def __getNodeArray(self, root:Node, array:list)->list[Node]:
        if root != None:
            # print(" ",root.info)
            array.append(root)
            for child in root.children:
                self.__getNodeArray(child,  array)
    
    #regresa un árbol en forma de arreglo, recorre el árbol en preorden
    def getNodeArray(self)->list[Node]:
        array = []
        self.__getNodeArray(self.root,array)
        return array

    def __getTerminalNodes(self)->list[Node]:
        """Return a list of terminal nodes"""

        nodeArray = self.getNodeArray()
        terminalNodeArray = []
        for node in nodeArray:
            if node.isTerminal(): 
                terminalNodeArray.append(node)
        
        return terminalNodeArray

    def __getNonTerminalNodes(self)->list[Node]:
        """Return a list of non terminal nodes
            excludes nodes with ER ruleset"""

        nodeArray = self.getNodeArray()
        # print("Node array")
        ERNames = self.rules["ER"].getNonTerminalSet()
                    
        nonTerminalNodeArray = [node for node in nodeArray if not (node.info in ERNames) and not node.isTerminal()]
        # for node in nonTerminalNodeArray:
        #     print(node.info)
        # print()
        return nonTerminalNodeArray
        

    """TODO: change to new algorithm
    
    IMPORTANT: stay away from ER ruleset, dont change these nodes, 
    they will mutate instead be stored in an array in preorder
    prob = random [0,1]
    if prob <= 0.1
        pick terminale node
    else
        pick nonterminal node
    """
    #regresa un nodo aleatorio del árbol
    def getRandomNode(self)->Node:
        """Take a non terminal node 90% of the time 
        and a terminal node 10% of the time"""
        terminalnodes = self.__getTerminalNodes()
        nonTerminalNodes = self.__getNonTerminalNodes()
        #rnd > 0.1 if true is 90% and 10% if false
        #take non terminal node if true and terminal if false
        nodeArray = nonTerminalNodes  if self.__flip(0.1) else terminalnodes
        beg = (len(nodeArray)//10)
        if len(nodeArray) > 1: 
            place = random.randint(1,len(nodeArray)-1)
            return nodeArray[place]
        else:
            return self.root

    
    def mutate(self, pm):
        # print(self.root.info, self.rules["S"].getRuleset())
        self.__mutate(self.root, pm)
        
        
        
    # Para solucionar lo del archivo gp
    def __getstate__(self):
        d = self.__dict__.copy()
        d["ros_node"] = None
        return d

    def __setstate__(self, state):
        self.__dict__.update(state)
        self.ros_node = None
        
        
    # Método para convertir el arbol a lisp 
    def toLisp(self) -> str:
        # Funcion para convertir 
        def convertirNodo(node):
            if node is None:
                return None
            if node.isTerminal():
                # Devuelve cadena si es terminal
                return str(node.info)
            # Para no terminal
            children = [convertirNodo(child) for child in node.children]
            return f"({node.info} {' '.join(children)})"
        
        return convertirNodo(self.root)
