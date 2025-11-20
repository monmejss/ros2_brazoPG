# hasta que los sensores detecten al objeto empieza a mandar posicion del objeto 

import rclpy
from rclpy.node import Node
from gazebo_msgs.msg import ModelStates
from geometry_msgs.msg import Point     # para la pos del objeto
from std_msgs.msg import Float64MultiArray

class CorrienteDorsal(Node):
    def __init__(self):
        super().__init__('corriente_dorsal')
        
        # suscriptor al topico gazebo/model_states
        self.subscription = self.create_subscription(
            ModelStates, '/gazebo/model_states', self.listener_callback, 10
        )
        
        # para saber posicion
        self.publisher_posicionObjeto = self.create_publisher(
            Point, '/corriente_dorsal/posicion_objeto', 10
        )
        
        # para la trayectoria
        self.publisher_trayectoria = self.create_publisher(
            Float64MultiArray, '/trayectoria_objeto', 10
        )
        
        self.trayectoria = []
        self.ultima_posicion = None
        self.get_logger().info("Nodo iniciado: Corriente Dorsal")

    
    def listener_callback(self, msg: ModelStates):
        if 'alien' not in msg.name:
            self.get_logger().warn_once("No se encuentra el modelo del objeto")
            return

        index = msg.name.index('alien')
        pose = msg.pose[index]

        x = pose.position.x
        y = pose.position.y
        z = pose.position.z

        # publicar posición actual
        mensajePosObj = Point(x=x, y=y, z=z)
        self.publisher_posicionObjeto.publish(mensajePosObj)

        # registrar trayectoria
        self.trayectoria.append([x, y, z])
        trayectoria_msg = Float64MultiArray(data=[coord for p in self.trayectoria for coord in p])
        self.publisher_trayectoria.publish(trayectoria_msg)

        # mostrar logs solo si cambió la posición
        if self.ultima_posicion is None or (x, y, z) != self.ultima_posicion:
            #self.get_logger().info(f"Posicion objeto: ({x:.2f}, {y:.2f}, {z:.2f})")
            self.ultima_posicion = (x, y, z)

def main(args=None):
    rclpy.init(args=args)
    node = CorrienteDorsal()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
