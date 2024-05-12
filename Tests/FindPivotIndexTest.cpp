#include "FindPivotIndex.h"
#include <gtest/gtest.h>
namespace {
TEST(FindPivotTest, SimpleTests) {
  Easy::FindPivot instance;
  std::vector<int> nums = std::vector<int>{1, 7, 3, 6, 5, 6};
  ASSERT_EQ(instance.findPivotIndex(nums), 3);
  nums = std::vector<int>{1, 2, 3};
  ASSERT_EQ(instance.findPivotIndex(nums), -1);
  nums = std::vector<int>{2, 1, -1};
  ASSERT_EQ(instance.findPivotIndex(nums), 0);
};
} // namespace
