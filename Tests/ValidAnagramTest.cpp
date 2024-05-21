#include "ValidAnagram.h"
#include <gtest/gtest.h>
namespace {
TEST(ValidAnagram, SimpleTests) {
  Easy::ValidAnagram instance;
  ASSERT_TRUE(instance.isAnagram("anagram", "nagaram"));
  ASSERT_FALSE(instance.isAnagram("rat", "car"));
}
} // namespace
