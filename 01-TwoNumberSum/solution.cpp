//O(nlog(n)) time | O(1) space
#include <algorithm>
#include <iostream>
#include "solution.h"

std::vector<int> twoNumberSum1(std::vector<int> array, int targetSum) {
    std::sort(array.begin(), array.end());
    int left = 0;
    int right = array.size()-1;

    while(left < right)
    {
        int currentSum = array[left] + array[right];
        if(currentSum == targetSum)
            return {array[left], array[right]};
        else if (currentSum < targetSum)
            left++;
        else
            right--;
    }
    return {};
}

std::vector<int> twoNumberSum2(std::vector<int> array, int targetSum) {
    std::vector<int> values;
    for(int value : array)
    {
        int potentialMatch = targetSum - value;
        auto it = find(values.begin(), values.end(), potentialMatch);
        if(it != values.end())
        {
            std::vector<int> result{potentialMatch, value};
            return result;
        }
        else
            values.push_back(value);
    }
    return {};
}