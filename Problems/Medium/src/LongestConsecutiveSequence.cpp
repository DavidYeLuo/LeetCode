#include "LongestConsecutiveSequence.h"
#include <unordered_map>

Medium::LongestConsecutiveSequence::LongestConsecutiveSequence() {}
int Medium::LongestConsecutiveSequence::longestConsecutiveSequence(
    std::vector<int> &nums) {
  if (nums.size() == 0)
    return 0;
  std::unordered_map<int, bool> m;
  for (int i = 0; i < nums.size(); i++) {
    m[nums[i]] = false;
  }
  int longest = 1;
  for (int i = 0; i < nums.size(); i++) {
    if (m[nums[i]] == true)
      continue;

    int current = 1;
    for (int next_index = 1; m.find(nums[i] - next_index) != m.end();
         next_index++) {
      m[nums[i] - next_index] = true;
      current++;
    }

    for (int next_index = 1; m.find(nums[i] + next_index) != m.end();
         next_index++) {
      m[nums[i] + next_index] = true;
      current++;
    }
    if (current > longest)
      longest = current;
  }
  return longest;
}
