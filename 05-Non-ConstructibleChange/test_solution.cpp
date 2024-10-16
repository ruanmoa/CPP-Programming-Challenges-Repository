#include <gtest/gtest.h>
#include "solution.h"

TEST(SolutionTest, test1) {
    std::vector<int> coins={5, 7, 1, 1, 2, 3, 22};
    int expect_result = 20;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test2) {
    std::vector<int> coins={1, 1, 1, 1, 1};
    int expect_result = 6;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test3) {
    std::vector<int> coins={1, 5, 1, 1, 1, 10, 15, 20, 100};
    int expect_result = 55;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test4) {
    std::vector<int> coins={6, 4, 5, 1, 1, 8, 9};
    int expect_result = 3;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test5) {
    std::vector<int> coins={};
    int expect_result = 1;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test6) {
    std::vector<int> coins={87};
    int expect_result = 1;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test7) {
    std::vector<int> coins={5, 6, 1, 1, 2, 3, 4, 9};
    int expect_result = 32;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test8) {
    std::vector<int> coins={5, 6, 1, 1, 2, 3, 43};
    int expect_result = 19;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test9) {
    std::vector<int> coins={1, 1};
    int expect_result = 3;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test10) {
    std::vector<int> coins={2};
    int expect_result = 1;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test11) {
    std::vector<int> coins={1};
    int expect_result = 2;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test12) {
    std::vector<int> coins={109, 2000, 8765, 19, 18, 17, 16, 8, 1, 1, 2, 4};
    int expect_result = 87;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}

TEST(SolutionTest, test13) {
    std::vector<int> coins={1, 2, 3, 4, 5, 6, 7};
    int expect_result = 29;
    EXPECT_EQ(nonConstructibleChange(coins),expect_result);
}
