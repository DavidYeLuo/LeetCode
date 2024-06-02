#include "ValidParentheses.h"
#include <gtest/gtest.h>
namespace {
TEST(ValidParentheses, SimpleTests) {
  Easy::ValidParentheses instance;
  std::string input;
  bool result;

  input = "()";
  result = true;
  ASSERT_EQ(instance.isValid(input), result);
  input = "()[]{}";
  result = true;
  ASSERT_EQ(instance.isValid(input), result);
  input = "(]";
  result = false;
  ASSERT_EQ(instance.isValid(input), result);
} // Test
} // namespace
