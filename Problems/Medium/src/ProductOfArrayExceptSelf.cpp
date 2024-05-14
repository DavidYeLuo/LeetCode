#include "ProductOfArrayExceptSelf.h"
std::vector<int>
Medium::ProductOfArrayExceptSelf::productExceptSelf(std::vector<int> &nums) {
  std::vector<int> result;
  std::vector<int> prefix;
  std::vector<int> suffix;
  result.resize(nums.size());
  prefix.resize(nums.size());
  suffix.resize(nums.size());

  prefix[0] = 1;
  suffix[nums.size() - 1] = 1;
  for (int i = 1; i < nums.size(); i++) {
    prefix[i] = nums[i - 1] * prefix[i - 1];
  }
  for (int i = nums.size() - 2; i >= 0; i--) {
    suffix[i] = nums[i + 1] * suffix[i + 1];
  }
  for (int i = 0; i < nums.size(); i++) {
    result[i] = prefix[i] * suffix[i];
  }
  return result;
}
