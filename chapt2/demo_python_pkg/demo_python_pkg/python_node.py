import rclpy
from rclpy.node import Node

def main():
    rclpy.init() #初始化工作，分配资源
    node = Node('python_node')
    node.get_logger().info('Hello_python_node...')
    rclpy.spin(node)
    rclpy.shutdown()