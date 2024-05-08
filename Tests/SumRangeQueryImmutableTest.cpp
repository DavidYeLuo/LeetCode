#include "SumRangeQueryImmutable.h"
#include <gtest/gtest.h>
namespace {
TEST(SumRangeQueryImmutable, SimpleTest) {
  std::vector<int> input = {-2, 0, 3, -5, 2, -1};
  Easy::SumRangeQueryImmutable numArray(input);
  ASSERT_EQ(numArray.sumRange(0, 2), 1);
  ASSERT_EQ(numArray.sumRange(2, 5), -1);
  ASSERT_EQ(numArray.sumRange(0, 5), -3);
}
} // namespace
