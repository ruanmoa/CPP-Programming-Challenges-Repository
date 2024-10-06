#include <gtest/gtest.h>
#include "solution.h"

TEST(SolutionTest, test1) {
    std::vector<int> array{3, 5, -4, 8, 11, 1, -1, 6};
    int targetSum=10;
    std::vector<int> expect_array1{-1,11};
    std::vector<int> expect_array2{11,-1};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array1);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array2);
}

TEST(SolutionTest, test2) {
    std::vector<int> array{4, 6};
    int targetSum=10;
    std::vector<int> expect_array{4,6};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array);
}

TEST(SolutionTest, test3) {
    std::vector<int> array{4, 6, 1};
    int targetSum=5;
    std::vector<int> expect_array1{1, 4};
    std::vector<int> expect_array2{4, 1};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array1);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array2);
}

TEST(SolutionTest, test4) {
    std::vector<int> array{4, 6, 1, -3};
    int targetSum=3;
    std::vector<int> expect_array1{-3, 6};
    std::vector<int> expect_array2{6, -3};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array1);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array2);
}

TEST(SolutionTest, test5) {
    std::vector<int> array{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int targetSum=17;
    std::vector<int> expect_array{8, 9};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array);
}

TEST(SolutionTest, test6) {
    std::vector<int> array{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int targetSum=18;
    std::vector<int> expect_array{3, 15};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array);
}

TEST(SolutionTest, test7) {
    std::vector<int> array{-7, -5, -3, -1, 0, 1, 3, 5, 7};
    int targetSum=-5;
    std::vector<int> expect_array{-5, 0};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array);
}

TEST(SolutionTest, test8) {
    std::vector<int> array{-21, 301, 12, 4, 65, 56, 210, 356, 9, -47};
    int targetSum=163;
    std::vector<int> expect_array1{-47, 210};
    std::vector<int> expect_array2{210, -47};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array1);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array2);
}

TEST(SolutionTest, test9) {
    std::vector<int> array{-21, 301, 12, 4, 65, 56, 210, 356, 9, -47};
    int targetSum=164;
    std::vector<int> expect_array{};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array);
}

TEST(SolutionTest, test10) {
    std::vector<int> array{3, 5, -4, 8, 11, 1, -1, 6};
    int targetSum=15;
    std::vector<int> expect_array{};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array);
}

TEST(SolutionTest, test11) {
    std::vector<int> array{14};
    int targetSum=15;
    std::vector<int> expect_array{};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array);
}

TEST(SolutionTest, test12) {
    std::vector<int> array{15};
    int targetSum=15;
    std::vector<int> expect_array{};
    EXPECT_EQ(twoNumberSum1(array, targetSum), expect_array);
    EXPECT_EQ(twoNumberSum2(array, targetSum), expect_array);
}