#include "TwoSum.h"
#include <gtest/gtest.h>
namespace {

struct Problem {
  std::vector<int> nums;
  int target;
  std::vector<int> answer;
  // bool operator==(const Problem &other) {
  //   return target == other.target && nums == other.nums &&
  //          answer == other.answer;
  // }
};

// TODO: Add init for problems

std::vector<Problem> testCases;
void init() {
  testCases = {{{2, 7, 11, 15}, 9, {0, 1}},
               {{3, 2, 4}, 6, {1, 2}},
               {{3, 3}, 6, {0, 1}}}; // namespace
}

TEST(TwoSum, SimpleTests) {
  init();
  for (const auto &[nums, target, answer] : testCases) {
    Easy::TwoSum instance;
    ASSERT_EQ(answer, instance.twoSum(nums, target));
  }
};
} // namespace
