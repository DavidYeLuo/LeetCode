#include "SubarraySumEqualsK.h"
// #include <stdio.h>

// void debugPrint(std::unordered_map<int, int> &map) {
//   printf("{");
//   for (const auto &[key, value] : map) {
//     printf("(%d,%d) ", key, value);
//   }
//   printf("}\n");
// }
int Medium::SubarraySumEqualsK::subarraySum(std::vector<int> &nums, int k) {
  std::unordered_map<int, int> map;
  int sum = 0;
  int count = 0;

  map[0]++;
  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    if (map.find(sum - k) != map.end()) {
      count += map[sum - k];
    }
    map[sum]++;
  }
  return count;
}
