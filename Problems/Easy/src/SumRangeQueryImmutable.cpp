#include "SumRangeQueryImmutable.h"

Easy::SumRangeQueryImmutable::SumRangeQueryImmutable(std::vector<int> &nums) {
  // This doesn't make much of difference but for practice purpose
  // Add extra case memory to avoid having edge case when left == 0 in
  // sumRange()
  prefixSum.resize(nums.size() + 1, 0);
  for (int i = 1; i < prefixSum.size(); i++) {
    prefixSum[i] = nums[i - 1] + prefixSum[i - 1];
  }
};
int Easy::SumRangeQueryImmutable::sumRange(int left, int right) {
  // Index Offset
  left++;
  right++;
  return prefixSum[right] - prefixSum[left - 1];
};
