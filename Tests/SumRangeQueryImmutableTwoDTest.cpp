#include "SumRangeQueryImmutableTwoD.h"
#include <gtest/gtest.h>
namespace {
TEST(SumRangeQueryImmutableTwoD, SimpleTest) {
  std::vector<std::vector<int>> matrix = {{3, 0, 1, 4, 2},
                                          {5, 6, 3, 2, 1},
                                          {1, 2, 0, 1, 5},
                                          {4, 1, 0, 1, 7},
                                          {1, 0, 3, 0, 5}};
  Medium::SumRangeQueryImmutableTwoD numMatrix(matrix);
  ASSERT_EQ(numMatrix.sumRegion(2, 1, 4, 3), 8);
  ASSERT_EQ(numMatrix.sumRegion(1, 1, 2, 2), 11);
  ASSERT_EQ(numMatrix.sumRegion(1, 2, 2, 4), 12);
}
} // namespace
