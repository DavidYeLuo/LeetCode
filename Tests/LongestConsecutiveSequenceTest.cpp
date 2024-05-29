#include "LongestConsecutiveSequence.h"
#include <gtest/gtest.h>
namespace {
TEST(LongestConsecutiveSequence, SimpleTests) {
  std::vector<int> nums;
  int expected;
  Medium::LongestConsecutiveSequence instance;

  nums = {100, 4, 200, 1, 3, 2};
  expected = 4;
  ASSERT_EQ(expected, instance.longestConsecutiveSequence(nums));

  nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  expected = 9;
  ASSERT_EQ(expected, instance.longestConsecutiveSequence(nums));
} // Test
} // namespace
