#include "SumRangeQueryImmutable.h"

Easy::SumRangeQueryImmutable::SumRangeQueryImmutable(std::vector<int> &nums) {
  this->nums = nums;
};
int Easy::SumRangeQueryImmutable::sumRange(int left, int right) {
  int sum = 0;
  for (int i = left; i <= right; i++) {
    sum += nums[i];
  }
  return sum;
};
