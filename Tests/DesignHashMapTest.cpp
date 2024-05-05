#include "DesignHashMap.h"
#include <gtest/gtest.h>
namespace {
TEST(DesignHashMap, SimpleTests) {
  Easy::DesignHashMap myHashMap;
  myHashMap.put(1, 1);            // The map is now [[1,1]]
  myHashMap.put(2, 2);            // The map is now [[1,1], [2,2]]
  ASSERT_EQ(myHashMap.get(1), 1); // return 1, The map is now [[1,1], [2,2]]
  ASSERT_EQ(myHashMap.get(3),
            -1); // return -1 (i.e., not found), The map is now [[1,1], [2,2]]
  myHashMap.put(
      2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)
  ASSERT_EQ(myHashMap.get(2), 1); // return 1, The map is now [[1,1], [2,1]]
  myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
  ASSERT_EQ(myHashMap.get(2),
            -1); // return -1 (i.e., not found), The map is now [[1,1]]
};
} // namespace
