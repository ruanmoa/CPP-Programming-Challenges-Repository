#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include "solution.h"

std::string tournamentWinner1(std::vector<std::vector<std::string>> competitions, std::vector<int> results) {
    std::map<std::string, int> classification;
  
    for(int i = 0; i < competitions.size(); i++)
      classification[competitions[i][!results[i]]]+=3;

    auto greatestValue = std::max_element(
            classification.begin(), classification.end(),
            [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) 
            {
                return a.second < b.second;
            }
    );
  
  return greatestValue->first;
}

std::string tournamentWinner2(std::vector<std::vector<std::string>> competitions, std::vector<int> results) {
    std::string winner = "";
    std::map<std::string, int> classification;
  
    for(int i = 0; i < competitions.size(); i++)
    {
      std::string currentTeam = competitions[i][!results[i]];
      classification[currentTeam]+=3;
      winner = (classification[currentTeam] > classification[winner]
        ? currentTeam
        : winner);
    }
      
  return winner;
}