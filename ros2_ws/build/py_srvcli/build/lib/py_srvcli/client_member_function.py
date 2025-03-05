from tutorial_interfaces.srv import AddThreeInts                            # CHANGE
import sys
import rclpy
from rclpy.node import Node
import random


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(AddThreeInts, 'add_three_ints')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = AddThreeInts.Request()                                   # CHANGE

    def generate_random_sequence(self):
        return [random.randint(0, 100) for _ in range(10)]

    def send_request(self):
        random_sequence = self.generate_random_sequence()

        self.req.a = random_sequence[0]
        self.req.b = random_sequence[1]
        self.req.c = random_sequence[2]
        self.req.d = random_sequence[3]
        self.req.e = random_sequence[4]
        self.req.f = random_sequence[5]
        self.req.g = random_sequence[6]
        self.req.h = random_sequence[7]
        self.req.i = random_sequence[8]
        self.req.j = random_sequence[9]

        self.get_logger().info(
            f'Sending request: {self.req.a}, {self.req.b}, {self.req.c}, {self.req.d}, {self.req.e}, '
            f'{self.req.f}, {self.req.g}, {self.req.h}, {self.req.i}, {self.req.j}'
        )

        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    minimal_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(minimal_client)
        if minimal_client.future.done():
            try:
                response = minimal_client.future.result()
            except Exception as e:
                minimal_client.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                minimal_client.get_logger().info(
                    'Result of add_three_ints: for %d + %d + %d + %d + %d + %d + %d + %d + %d + %d = %d' %
                    (minimal_client.req.a, minimal_client.req.b, minimal_client.req.c, minimal_client.req.d, minimal_client.req.e, minimal_client.req.f, minimal_client.req.g, minimal_client.req.h, minimal_client.req.i, minimal_client.req.j, response.sum))
            break

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()