#include <algorithm>
#include <iostream>
#include "solution.h"

bool isValidSubsequence1(std::vector<int> array, std::vector<int> sequence) {
    int arrIdx = 0;
    int seqIdx = 0;

    while(arrIdx < array.size() && seqIdx < sequence.size())
    {
        if (array[arrIdx] == sequence[seqIdx])
            seqIdx++;
        arrIdx++;
    }
    return seqIdx == sequence.size();
}

bool isValidSubsequence2(std::vector<int> array, std::vector<int> sequence) {
    int seqIdx = 0;
    for(int value : array)
    {
    if(seqIdx == sequence.size())
        break;
    if(sequence[seqIdx] == value)
        seqIdx++;
    }
    return seqIdx == sequence.size();
}