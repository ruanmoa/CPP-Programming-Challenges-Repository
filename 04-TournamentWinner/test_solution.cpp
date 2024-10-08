#include <gtest/gtest.h>
#include "solution.h"

TEST(SolutionTest, test1) {
    std::vector<std::vector<std::string>> competitions={
        {"HTML", "C#"},
        {"C#", "Python"},
        {"Python", "HTML"}};
    std::vector<int> results= {0, 0, 1};

    EXPECT_EQ(tournamentWinner1(competitions, results), "Python");
    EXPECT_EQ(tournamentWinner2(competitions, results), "Python");
}

TEST(SolutionTest, test2) {
    std::vector<std::vector<std::string>> competitions={
        {"HTML", "Java"},
        {"Java", "Python"},
        {"Python", "HTML"}};
    std::vector<int> results= {0, 1, 1};
    
    EXPECT_EQ(tournamentWinner1(competitions, results), "Java");
    EXPECT_EQ(tournamentWinner2(competitions, results), "Java");
}

TEST(SolutionTest, test3) {
    std::vector<std::vector<std::string>> competitions={
        {"HTML", "Java"},
        {"Java", "Python"},
        {"Python", "HTML"},
        {"C#", "Python"},
        {"Java", "C#"},
        {"C#", "HTML"}};
    std::vector<int> results= {0, 1, 1, 1, 0, 1};

    EXPECT_EQ(tournamentWinner1(competitions, results), "C#");
    EXPECT_EQ(tournamentWinner2(competitions, results), "C#");
}

TEST(SolutionTest, test4) {
    std::vector<std::vector<std::string>> competitions={
        {"HTML", "Java"},
        {"Java", "Python"},
        {"Python", "HTML"},
        {"C#", "Python"},
        {"Java", "C#"},
        {"C#", "HTML"},
        {"SQL", "C#"},
        {"HTML", "SQL"},
        {"SQL", "Python"},
        {"SQL", "Java"}};
    std::vector<int> results= {0, 1, 1, 1, 0, 1, 0, 1, 1, 0};
    
    EXPECT_EQ(tournamentWinner1(competitions, results), "C#");
    EXPECT_EQ(tournamentWinner2(competitions, results), "C#");
}

TEST(SolutionTest, test5) {
    std::vector<std::vector<std::string>> competitions={
        {"Bulls", "Eagles"}};
    std::vector<int> results= {1};
    
    EXPECT_EQ(tournamentWinner1(competitions, results), "Bulls");
    EXPECT_EQ(tournamentWinner2(competitions, results), "Bulls");
}

TEST(SolutionTest, test6) {
    std::vector<std::vector<std::string>> competitions={
        {"Bulls", "Eagles"},
        {"Bulls", "Bears"},
        {"Bears", "Eagles"}};
    std::vector<int> results= {0, 0, 0};
    
    EXPECT_EQ(tournamentWinner1(competitions, results), "Eagles");
    EXPECT_EQ(tournamentWinner2(competitions, results), "Eagles");
}

TEST(SolutionTest, test7) {
    std::vector<std::vector<std::string>> competitions={
        {"Bulls", "Eagles"},
        {"Bulls", "Bears"},
        {"Bulls", "Monkeys"},
        {"Eagles", "Bears"},
        {"Eagles", "Monkeys"},
        {"Bears", "Monkeys"}};
    std::vector<int> results= {1, 1, 1, 1, 1, 1};
    
    EXPECT_EQ(tournamentWinner1(competitions, results), "Bulls");
    EXPECT_EQ(tournamentWinner2(competitions, results), "Bulls");
}

TEST(SolutionTest, test8) {
    std::vector<std::vector<std::string>> competitions={
        {"AlgoMasters", "FrontPage Freebirds"},
        {"Runtime Terror", "Static Startup"},
        {"WeC#", "Hypertext Assassins"},
        {"AlgoMasters", "WeC#"},
        {"Static Startup", "Hypertext Assassins"},
        {"Runtime Terror", "FrontPage Freebirds"},
        {"AlgoMasters", "Runtime Terror"},
        {"Hypertext Assassins", "FrontPage Freebirds"},
        {"Static Startup", "WeC#"},
        {"AlgoMasters", "Static Startup"},
        {"FrontPage Freebirds", "WeC#"},
        {"Hypertext Assassins", "Runtime Terror"},
        {"AlgoMasters", "Hypertext Assassins"},
        {"WeC#", "Runtime Terror"},
        {"FrontPage Freebirds", "Static Startup"}};
    std::vector<int> results= {1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};
    
    EXPECT_EQ(tournamentWinner1(competitions, results), "AlgoMasters");
    EXPECT_EQ(tournamentWinner2(competitions, results), "AlgoMasters");
}

TEST(SolutionTest, test9) {
    std::vector<std::vector<std::string>> competitions={
        {"HTML", "Java"},
        {"Java", "Python"},
        {"Python", "HTML"},
        {"C#", "Python"},
        {"Java", "C#"},
        {"C#", "HTML"},
        {"SQL", "C#"},
        {"HTML", "SQL"},
        {"SQL", "Python"},
        {"SQL", "Java"}};
    std::vector<int> results= {0, 0, 0, 0, 0, 0, 1, 0, 1, 1};
    
    EXPECT_EQ(tournamentWinner1(competitions, results), "SQL");
    EXPECT_EQ(tournamentWinner2(competitions, results), "SQL");
}

TEST(SolutionTest, test10) {
    std::vector<std::vector<std::string>> competitions={
        {"A", "B"}};
    std::vector<int> results= {0};
    
    EXPECT_EQ(tournamentWinner1(competitions, results), "B");
    EXPECT_EQ(tournamentWinner2(competitions, results), "B");
}

