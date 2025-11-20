import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point     # Para publicar la posición del robot
from nav_msgs.msg import Odometry       # Mensaje que contiene posición y orientación del robot


class CortezaSomatosensorial(Node):
    def __init__(self):
        super().__init__('corteza_somatosensorial')
        self.suscriptorOdom = self.create_subscription(
            Odometry, '/odom', self.callback_odom, 10
        )

        # publicador de posicion
        self.publisher_posicionRobot = self.create_publisher(
            Point, '/corteza_somatosensorial/posicion_robot', 10
        )

        self.get_logger().info('Nodo iniciado: Corteza Somatosensorial')

    def callback_odom(self, msg):
        x = msg.pose.pose.position.x
        y = msg.pose.pose.position.y
        z = msg.pose.pose.position.z

        # mensaje para posicion
        mensajePos = Point()
        mensajePos.x = x
        mensajePos.y = y
        mensajePos.z = z

        self.publisher_posicionRobot.publish(mensajePos)
        #self.get_logger().info(f"Posición. x: {x:.6f}, y: {y:.6f}, z: {z:.6f}")


def main(args=None):
    rclpy.init(args=args)
    nodo = CortezaSomatosensorial()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
