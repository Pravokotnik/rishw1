from tutorial_interfaces.srv import AddThreeInts                                                           # CHANGE

import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(AddThreeInts, 'add_three_ints', self.add_three_ints_callback)       # CHANGE

    def add_three_ints_callback(self, request, response):
        response.sum = request.a + request.b + request.c + request.d + request.e + request.f + request.g + request.h + request.i + request.j  # Corrected to include request.h
        self.get_logger().info('Incoming request\na: %d b: %d c: %d d: %d e: %d f: %d g: %d h: %d i: %d j: %d' % 
                           (request.a, request.b, request.c, request.d, request.e, request.f, request.g, request.h, request.i, request.j))  # Corrected to include request.h
        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()