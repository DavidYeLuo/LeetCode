#include "BaseballGame.h"
#include <gtest/gtest.h>
namespace {
TEST(BaseballGame, SimpleTests) {
  Easy::BaseballGame instance;
  std::vector<std::string> ops;
  int expected;

  ops = {"5", "2", "C", "D", "+"};
  expected = 30;
  ASSERT_EQ(expected, instance.calPoints(ops));

  ops = {"5", "-2", "4", "C", "D", "9", "+", "+"};
  expected = 27;
  ASSERT_EQ(expected, instance.calPoints(ops));
} // Test
} // namespace
