#include "TwoSum.h"
#include <unordered_map>

std::vector<int> Easy::TwoSum::twoSum(const std::vector<int> &nums,
                                      int target) {
  std::unordered_map<int, int> m;
  for (int i = 0; i < nums.size(); i++) {
    if (m.find(target - nums[i]) == m.end()) {
      m[nums[i]] = i;
    } else {
      return {m[target - nums[i]], i};
    }
  }
  return nums;
}
