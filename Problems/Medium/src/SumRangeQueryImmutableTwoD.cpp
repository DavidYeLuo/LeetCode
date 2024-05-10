#include "SumRangeQueryImmutableTwoD.h"
#include <cstdio>
#include <iostream>

Medium::SumRangeQueryImmutableTwoD::SumRangeQueryImmutableTwoD(
    std::vector<std::vector<int>> &matrix) {
  std::vector<int> initRow = std::vector<int>();
  initRow.resize(matrix[0].size());
  prefixSum.resize(matrix.size(), initRow);

  prefixSum[0][0] = matrix[0][0];
  for (int row = 1; row < matrix.size(); row++) {
    prefixSum[row][0] = matrix[row][0] + prefixSum[row - 1][0];
  }
  for (int col = 1; col < matrix[0].size(); col++) {
    prefixSum[0][col] = matrix[0][col] + prefixSum[0][col - 1];
  }
  for (int row = 1; row < matrix.size(); row++) {
    for (int col = 1; col < matrix[0].size(); col++) {
      int sum = matrix[row][col] + prefixSum[row - 1][col] +
                prefixSum[row][col - 1] - prefixSum[row - 1][col - 1];
      prefixSum[row][col] = sum;
    }
  }
}

// (row1, col1) (row1, col2)
// (row2, col1) (row2, col2)
int Medium::SumRangeQueryImmutableTwoD::sumRegion(int row1, int col1, int row2,
                                                  int col2) {
  printf("sum called\n");
  int bottomRight = get(row2, col2);
  int topRight = get(row1 - 1, col2);
  int bottomLeft = get(row2, col1 - 1);
  int topLeft = get(row1 - 1, col1 - 1);
  return bottomRight - topRight - bottomLeft + topLeft;
}

int Medium::SumRangeQueryImmutableTwoD::get(int row, int col) {
  int left = col < 0 ? 0 : col;
  int up = row < 0 ? 0 : row;
  printf("left: %d, up: %d\n", left, up);
  return prefixSum[up][left];
}
