#include <gtest/gtest.h>
#include "solution.h"

TEST(SolutionTest, test1) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{1, 6, -1, 10};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test2) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 22, 25, 6, -1, 8, 10};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test3) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 22, 6, -1, 8, 10};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test4) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{22, 25, 6};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test5) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{1, 6, 10};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test6) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 22, 10};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test7) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, -1, 8, 10};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test8) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{25};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test9) {
    std::vector<int> array{1, 1, 1, 1, 1};
    std::vector<int> sequence{1, 1, 1};
    bool expect_array= true;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test10) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 22, 25, 6, -1, 8, 10, 12};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test11) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{4, 5, 1, 22, 25, 6, -1, 8, 10};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test12) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 22, 23, 6, -1, 8, 10};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test13) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 22, 22, 25, 6, -1, 8, 10};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test14) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 22, 22, 6, -1, 8, 10};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test15) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{1, 6, -1, -1};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test16) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{1, 6, -1, -1, 10};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test17) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{1, 6, -1, -2};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test18) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{26};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test19) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 25, 22, 6, -1, 8, 10};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test20) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 26, 22, 8};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test21) {
    std::vector<int> array{1, 1, 6, 1};
    std::vector<int> sequence{1, 1, 1, 6};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test22) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{1, 6, -1, 10, 11, 11, 11, 11};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test23) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{5, 1, 22, 25, 6, -1, 8, 10, 10};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}

TEST(SolutionTest, test24) {
    std::vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence{1, 6, -1, 5};
    bool expect_array= false;
    EXPECT_EQ(isValidSubsequence1(array, sequence), expect_array);
    EXPECT_EQ(isValidSubsequence2(array, sequence), expect_array);
}
