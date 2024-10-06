#include <gtest/gtest.h>
#include "solution.h"

TEST(SolutionTest, test1) {
    std::vector<int> array{1, 2, 3, 5, 6, 8, 9};
    std::vector<int> expect_array= {1, 4, 9, 25, 36, 64, 81};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test2) {
    std::vector<int> array{1};
    std::vector<int> expect_array= {1};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test3) {
    std::vector<int> array{1, 2};
    std::vector<int> expect_array= {1, 4};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test4) {
    std::vector<int> array{1, 2, 3, 4, 5};
    std::vector<int> expect_array= {1, 4, 9, 16, 25};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test5) {
    std::vector<int> array{0};
    std::vector<int> expect_array= {0};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test6) {
    std::vector<int> array{10};
    std::vector<int> expect_array= {100};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test7) {
    std::vector<int> array{-1};
    std::vector<int> expect_array= {1};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test8) {
    std::vector<int> array{-2, -1};
    std::vector<int> expect_array= {1, 4};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test9) {
    std::vector<int> array{-5, -4, -3, -2, -1};
    std::vector<int> expect_array= {1, 4, 9, 16, 25};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test10) {
    std::vector<int> array{-10};
    std::vector<int> expect_array= {100};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test11) {
    std::vector<int> array{-10, -5, 0, 5, 10};
    std::vector<int> expect_array= {0, 25, 25, 100, 100};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test12) {
    std::vector<int> array{-7, -3, 1, 9, 22, 30};
    std::vector<int> expect_array= {1, 9, 49, 81, 484, 900};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test13) {
    std::vector<int> array{-50, -13, -2, -1, 0, 0, 1, 1, 2, 3, 19, 20};
    std::vector<int> expect_array= {0, 0, 1, 1, 1, 4, 4, 9, 169, 361, 400, 2500};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test14) {
    std::vector<int> array{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::vector<int> expect_array= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test15) {
    std::vector<int> array{-1, -1, 2, 3, 3, 3, 4};
    std::vector<int> expect_array= {1, 1, 4, 9, 9, 9, 16};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test16) {
    std::vector<int> array{-3, -2, -1};
    std::vector<int> expect_array= {1, 4, 9};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}

TEST(SolutionTest, test17) {
    std::vector<int> array{-3, -2, -1};
    std::vector<int> expect_array= {1, 4, 9};
    EXPECT_EQ(sortedSquaredArray(array), expect_array);
}