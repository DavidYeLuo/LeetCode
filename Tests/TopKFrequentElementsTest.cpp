#include "TopKFrequentElements.h"
#include <gtest/gtest.h>
namespace {
TEST(TopKFrequentElements, SimpleTests) {
  Medium::TopKFrequentElements instance;

  std::vector<int> nums;
  int k;
  std::vector<int> expected;

  nums = {1, 1, 1, 2, 2, 3};
  k = 2;
  expected = {1, 2};
  ASSERT_EQ(instance.topKFrequentElements(nums, k), expected);

} // Test
} // namespace
