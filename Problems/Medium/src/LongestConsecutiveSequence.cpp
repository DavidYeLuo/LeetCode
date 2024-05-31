#include "LongestConsecutiveSequence.h"

#include <cstdio>
#include <unordered_set>

Medium::LongestConsecutiveSequence::LongestConsecutiveSequence() {}
int Medium::LongestConsecutiveSequence::longestConsecutiveSequence(
    std::vector<int> &nums) {
  int longest = 0;
  std::unordered_set<int> s(nums.begin(), nums.end());

  for (const int &start : nums) {
    if (s.count(start - 1) != 0) // Skip if start not found
      continue;
    int index = start;
    int count = 0;
    while (s.count(index)) {
      count++;
      index++;
    }
    longest = std::max(count, longest);
  }

  return longest;
}
