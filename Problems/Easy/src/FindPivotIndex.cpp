#include "FindPivotIndex.h"

int Easy::FindPivot::findPivotIndex(std::vector<int> &nums) {
  // Starting from postfix because starting from prefix doesn't pass test
  std::vector<int> suffixSum;
  suffixSum.resize(nums.size() + 1, 0);
  for (int i = nums.size() - 1; i >= 0; i--) {
    suffixSum[i] = nums[i] + suffixSum[i + 1];
  }

  int prefixSum = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (suffixSum[i + 1] == prefixSum) {
      return i;
    }
    prefixSum += nums[i];
  }
  return -1;
}
