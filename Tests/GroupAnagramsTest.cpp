#include "GroupAnagrams.h"
#include <gtest/gtest.h>
namespace {
TEST(GroupAnagrams, SimpleTests) {
  Medium::GroupAnagrams instance;
  std::vector<std::string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
  std::vector<std::vector<std::string>> expected = {
      {"bat"}, {"nat", "tan"}, {"ate", "eat", "tea"}};

  ASSERT_EQ(instance.groupAnagrams(input), expected);
  input = {""};
  expected = {{""}};
  ASSERT_EQ(instance.groupAnagrams(input), expected);
  input = {"a"};
  expected = {{"a"}};
  ASSERT_EQ(instance.groupAnagrams(input), expected);

} // Test
} // namespace
