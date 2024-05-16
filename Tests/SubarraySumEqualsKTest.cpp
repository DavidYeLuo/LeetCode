#include "SubarraySumEqualsK.h"
#include <gtest/gtest.h>

TEST(SubarraySumEqualsK, SimpleTest) {
  Medium::SubarraySumEqualsK instance;

  std::vector<int> nums = {1, 1, 1};
  int k = 2;
  int expect = 2;
  ASSERT_EQ(instance.subarraySum(nums, k), expect);

  nums = {1, 2, 3};
  k = 3;
  expect = 2;
  ASSERT_EQ(instance.subarraySum(nums, k), expect);
}
