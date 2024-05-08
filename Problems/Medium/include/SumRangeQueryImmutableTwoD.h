#pragma once
#include <vector>
namespace Medium {
class SumRangeQueryImmutableTwoD {
public:
  SumRangeQueryImmutableTwoD(std::vector<std::vector<int>> &matrix);
  int sumRegion(int row1, int col1, int row2, int col2);
};
} // namespace Medium
