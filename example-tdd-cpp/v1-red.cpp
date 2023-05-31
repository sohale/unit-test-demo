#include <gtest/gtest.h>

TEST(MultiplyTest, TwoNumbers) {
    EXPECT_EQ(multiply(5, 3), 15);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
