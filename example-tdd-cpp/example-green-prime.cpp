#include <gtest/gtest.h>

bool isprime(int x) {
    for(int i=2;i<x-1;i++) {
      if (x % i == 0) {
        return false;
      }
    }
    return 0;
}

TEST(MultiplyTest, TwoNumbers) {
    EXPECT_TRUE(isprime(5));
    EXPECT_FALSE(isprime(4));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
