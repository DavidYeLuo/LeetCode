#include "ValidSudoku.h"
#include <cstdio>
#include <set>

Medium::ValidSudoku::ValidSudoku() {}

bool Medium::ValidSudoku::isValidSudoku(std::vector<std::vector<char>> board) {
  const int SIZE = 9;
  std::set<char> rowSet[SIZE];
  std::set<char> colSet[SIZE];
  std::set<char> boxSet[3][3];

  for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE; col++) {
      char c = board[row][col];
      if (c == '.')
        continue;
      if (rowSet[row].contains(c) || colSet[col].contains(c) ||
          boxSet[row / 3][col / 3].contains(c))
        return false;
      rowSet[row].insert(c);
      colSet[col].insert(c);
      boxSet[row / 3][col / 3].insert(c);
    }
  }
  return true;
}
