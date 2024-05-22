#include "GroupAnagrams.h"
#include <gtest/gtest.h>
namespace {
// Order doesn't matter so sorting will just help us test it
TEST(GroupAnagrams, SimpleTests) {
  Medium::GroupAnagrams instance;
  std::vector<std::vector<std::string>> result;
  std::vector<std::string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
  std::vector<std::vector<std::string>> expected = {
      {"bat"}, {"nat", "tan"}, {"ate", "eat", "tea"}};

  // Order doesn't matter so sorting will just help us test it
  auto ret = instance.groupAnagrams(input);
  std::sort(expected.begin(), expected.end());
  std::sort(ret.begin(), ret.end());
  for (auto &element : ret) {
    std::sort(element.begin(), element.end());
  }
  ASSERT_EQ(ret, expected);

  input = {""};
  expected = {{""}};
  ret = instance.groupAnagrams(input);
  std::sort(expected.begin(), expected.end());
  std::sort(ret.begin(), ret.end());
  for (auto &element : ret) {
    std::sort(element.begin(), element.end());
  }

  input = {"a"};
  expected = {{"a"}};
  ret = instance.groupAnagrams(input);
  std::sort(expected.begin(), expected.end());
  std::sort(ret.begin(), ret.end());
  for (auto &element : ret) {
    std::sort(element.begin(), element.end());
  }

} // Test
} // namespace
