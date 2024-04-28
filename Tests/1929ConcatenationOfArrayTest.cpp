#include "ConcatenationOfArray.h"
#include <gtest/gtest.h>
namespace {
std::vector<std::vector<std::vector<int>>> testCases = {
    {{1, 2, 1}, {1, 2, 1, 1, 2, 1}}, {{1, 3, 2, 1}, {1, 3, 2, 1, 1, 3, 2, 1}}};
TEST(ConcatenationOfArray, SimpleTests) {
  for (int i = 0; i < testCases.size(); i++) {
    std::vector<int> nums = testCases[i][0];
    std::vector<int> expected = testCases[i][1];
    std::cout << "expected: " << expected.size() << ", nums: " << nums.size()
              << std::endl;

    Easy::ConcatenationOfArray coa;
    ASSERT_EQ(expected, coa.getConcatenation(nums));
  } // for i in testCases
} // Test
} // namespace
