#include "ProductOfArrayExceptSelf.h"
#include <gtest/gtest.h>
TEST(ProductOfArrayEsceptSelf, SimpleTest) {
  Medium::ProductOfArrayExceptSelf instance;
  std::vector<int> nums = {1, 2, 3, 4};
  std::vector<int> expected = {24, 12, 8, 6};
  ASSERT_EQ(instance.productExceptSelf(nums), expected);
  nums = {-1, 1, 0, -3, 3};
  expected = {0, 0, 9, 0, 0};
  ASSERT_EQ(instance.productExceptSelf(nums), expected);
}
