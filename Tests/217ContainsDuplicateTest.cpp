#include "ContainsDuplicate.h"
#include <gtest/gtest.h>
#include <unordered_map>
namespace {
std::map<std::vector<int>, bool> testMap = {
    {{1, 2, 3, 1}, true},
    {{1, 2, 3, 4}, false},
    {{1, 1, 1, 3, 3, 4, 3, 2, 4, 2}, true}};
TEST(ContainsDuplicate, SimpleTests) {
  for (const auto &[nums, expected] : testMap) {
    Easy::ContainsDuplicate instance;
    ASSERT_EQ(expected, instance.containsDuplicate(nums));
  } // for i in testCases
} // Test
} // namespace
