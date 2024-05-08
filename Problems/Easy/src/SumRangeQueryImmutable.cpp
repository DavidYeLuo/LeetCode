#include "SumRangeQueryImmutable.h"

Easy::SumRangeQueryImmutable::SumRangeQueryImmutable(std::vector<int> &nums) {
  prefix_sum.resize(nums.size());
  prefix_sum[0] = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    prefix_sum[i] = prefix_sum[i - 1] + nums[i];
  }
};
int Easy::SumRangeQueryImmutable::sumRange(int left, int right) {
  if (left == 0)
    return prefix_sum[right];
  return prefix_sum[right] - prefix_sum[left - 1];
};
