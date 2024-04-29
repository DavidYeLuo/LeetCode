#include "ConcatenationOfArray.h"
#include <gtest/gtest.h>
namespace {
std::vector<std::vector<std::vector<int>>> testCases = {
    {{1, 2, 1}, {1, 2, 1, 1, 2, 1}}, {{1, 3, 2, 1}, {1, 3, 2, 1, 1, 3, 2, 1}}};
TEST(ConcatenationOfArray, SimpleTests) {
  for (int i = 0; i < testCases.size(); i++) {
    std::vector<int> nums = testCases[i][0];
    std::vector<int> expected = testCases[i][1];

    Easy::ConcatenationOfArray coa;
    ASSERT_EQ(expected, coa.getConcatenation(nums));
  } // for i in testCases
} // Test
} // namespace
