#include "ConcatenationOfArray.h"

std::vector<int>
Easy::ConcatenationOfArray::getConcatenation(std::vector<int> &nums) {
  std::vector<int> res;
  // Copy nums to res to avoid changing nums
  for (int i = 0; i < nums.size(); i++) {
    res.push_back(nums[i]);
  }

  for (int i = 0; i < nums.size(); i++) {
    res.push_back(nums[i]);
  }
  return res;
}
