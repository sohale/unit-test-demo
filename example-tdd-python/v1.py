import unittest

def multiply(a, b):
    return a * b

class TestMultiply(unittest.TestCase):
    def test_multiply_two_numbers(self):
        self.assertEqual(multiply(5, 3), 15)

if __name__ == '__main__':
    unittest.main()

