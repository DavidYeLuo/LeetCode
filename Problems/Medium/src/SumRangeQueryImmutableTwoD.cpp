#include "SumRangeQueryImmutableTwoD.h"
#include <cstdio>

Medium::SumRangeQueryImmutableTwoD::SumRangeQueryImmutableTwoD(
    std::vector<std::vector<int>> &matrix) {
  prefixSum.resize(matrix.size() + 1,
                   std::vector<int>(matrix[0].size() + 1, 0));
  for (int row = 0; row < matrix.size(); row++) {
    for (int col = 0; col < matrix[0].size(); col++) {
      prefixSum[row + 1][col + 1] = matrix[row][col] + prefixSum[row][col + 1] +
                                    prefixSum[row + 1][col] -
                                    prefixSum[row][col];
    }
  }
}

int Medium::SumRangeQueryImmutableTwoD::sumRegion(int row1, int col1, int row2,
                                                  int col2) {
  int bottomRight = get(row2, col2);
  int topRight = get(row1 - 1, col2);
  int bottomLeft = get(row2, col1 - 1);
  int topLeft = get(row1 - 1, col1 - 1);
  return bottomRight - topRight - bottomLeft + topLeft;
}

int Medium::SumRangeQueryImmutableTwoD::get(int row, int col) {
  return prefixSum[row + 1][col + 1];
}

// prefixSum Printer
/*
*
  printf("\n{");
  for (int row = 0; row < matrix.size(); row++) {
    printf("{\n");
    for (int col = 0; col < matrix[0].size(); col++) {
      printf("%d, ", prefixSum[row][col]);
    }
    printf("}\n");
  }
  printf("}\n");
*/
