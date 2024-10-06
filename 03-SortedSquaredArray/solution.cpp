#include <algorithm>
#include <iostream>
#include "solution.h"

std::vector<int> sortedSquaredArray(std::vector<int> array) {
  std::vector<int> sqrdArray;
  for(int value: array)
      sqrdArray.push_back(value*value);

  std::sort(sqrdArray.begin(), sqrdArray.end());
  return sqrdArray;
}