#include "ValidSudoku.h"
#include <cstdio>
#include <set>

Medium::ValidSudoku::ValidSudoku() {}

bool Medium::ValidSudoku::isValidSudoku(std::vector<std::vector<char>> board) {
  const int SIZE = 9;
  // Add extra dimension as a psudo hashmap
  bool rowSet[SIZE][9] = {false};
  bool colSet[SIZE][9] = {false};
  bool boxSet[3][3][9] = {false};

  for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE; col++) {
      if (board[row][col] == '.')
        continue;
      int c = board[row][col] -
              '1'; // Maps 1,2,3,...,9 to 0,1,2,3,...,8 to fit in array
      if (rowSet[row][c] || colSet[col][c] || boxSet[row / 3][col / 3][c])
        return false;

      rowSet[row][c] = true;
      colSet[col][c] = true;
      boxSet[row / 3][col / 3][c] = true;
    }
  }
  return true;

  // I prefer this way
  // const int SIZE = 9;
  // std::set<char> rowSet[SIZE];
  // std::set<char> colSet[SIZE];
  // std::set<char> boxSet[3][3];
  //
  // rowSet[0].insert('0');
  // for (int row = 0; row < SIZE; row++) {
  //   for (int col = 0; col < SIZE; col++) {
  //     char c = board[row][col];
  //     if (c == '.')
  //       continue;
  //     if (rowSet[row].contains(c) || colSet[col].contains(c) ||
  //         boxSet[row / 3][col / 3].contains(c))
  //       return false;
  //     rowSet[row].insert(c);
  //     colSet[col].insert(c);
  //     boxSet[row / 3][col / 3].insert(c);
  //   }
  // }
  // return true;
}
