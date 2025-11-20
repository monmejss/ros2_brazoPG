import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point     # para la posicion
import math

class cortezaParietal(Node):
    def __init__(self):
        super().__init__('corteza_parietal')
        
        
        
        # se suscribe para obtenr posiciones de objeto y robot
        self.suscriptorObjeto = self.create_subscription(
            Point, '/corriente_dorsal/posicion_objeto', self.callback_objeto, 10
        )
        
        self.suscriptorRobot = self.create_subscription(
            Point, '/corteza_somatosensorial/posicion_robot', self.callback_robot, 10
        )
        
        # publicador de distancia
        self.publisher_distanciaObjetoRobot = self.create_publisher(
            Point, 'corteza_parietal/distancia_objetoRobot', 10
        )
        
        self.posicionObjeto = None
        self.posicionRobot = None
        self.get_logger().info("Nodo iniciado: Corteza Parietal")
        
    
    def callback_objeto(self, msg):
        self.posicionObjeto = msg
        self.calcular_distancia()
        
    def callback_robot(self, msg):
        self.posicionRobot = msg
        self.calcular_distancia()
        
        
    # ahora si la distanciaaaaaa
    def calcular_distancia(self):
        if self.posicionObjeto is None or self.posicionRobot is None:
            return
        
        dx = self.posicionObjeto.x - self.posicionRobot.x
        dy = self.posicionObjeto.y - self.posicionRobot.y
        dz = self.posicionObjeto.z - self.posicionRobot.z
        
        distancia = math.sqrt(dx**2 + dy**2 + dz**2)
        
        msgDistancia = Point()
        msgDistancia.x = distancia
        msgDistancia.y = 0.0
        msgDistancia.z = 0.0
        
        self.publisher_distanciaObjetoRobot.publish(msgDistancia)
        self.get_logger().info(f'Distancia entre el objeto y el robot: {distancia:.4f}')

        
def main(args=None):
    rclpy.init(args=args)
    nodo = cortezaParietal()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()