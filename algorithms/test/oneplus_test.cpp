
#include <gtest/gtest.h>
#include "../66.加一.cpp" // 导入待测函数

TEST(PlusOneTest, BasicCases) {
    // 测试用例 1：正常情况，最后一位不是 9
    std::vector<int> digits1 = {1, 2, 3};
    std::vector<int> expected1 = {1, 2, 4};
    EXPECT_EQ(plusOne(digits1), expected1);

    // 测试用例 2：最后一位是 9，需要进位
    std::vector<int> digits2 = {1, 2, 9};
    std::vector<int> expected2 = {1, 3, 0};
    EXPECT_EQ(plusOne(digits2), expected2);

    // 测试用例 3：全是 9
    std::vector<int> digits3 = {9, 9, 9};
    std::vector<int> expected3 = {1, 0, 0, 0};
    EXPECT_EQ(plusOne(digits3), expected3);
}

TEST(PlusOneTest, EmptyInput) {
    // 测试用例 4：输入为空数组
    std::vector<int> digits4 = {};
    std::vector<int> expected4 = {};
    EXPECT_EQ(plusOne(digits4), expected4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}