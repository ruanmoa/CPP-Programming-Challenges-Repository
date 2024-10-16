#include <algorithm>
#include <vector>
#include "solution.h"

int nonConstructibleChange(std::vector<int> coins) {
  sort(coins.begin(), coins.end());

  int sum = 0;

  for(auto& it : coins)
  {
    if(it > (sum + 1))
      return sum + 1;
    else
      sum += it;
  }
  return (sum + 1);
}
