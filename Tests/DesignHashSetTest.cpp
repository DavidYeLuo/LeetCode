#include "DesignHashSet.h"
#include <gtest/gtest.h>
namespace {
TEST(DesignHashTest, SimpleTests) {
  Easy::DesignHashSet myHashSet;
  myHashSet.add(1);                        // set = [1]
  myHashSet.add(2);                        // set = [1, 2]
  ASSERT_EQ(myHashSet.contains(1), true);  // return True
  ASSERT_EQ(myHashSet.contains(3), false); // return False, (not found)
  myHashSet.add(2);                        // set = [1, 2]
  ASSERT_EQ(myHashSet.contains(2), true);  // return True
  myHashSet.remove(2);                     // set = [1]
  ASSERT_EQ(myHashSet.contains(2), false); // return False, (already removed)
};
} // namespace
