#include "LRUCache.h"
#include <gtest/gtest.h>
namespace {

TEST(LRU, SimpleTests) {
  Medium::LRUCache lRUCache(2);
  lRUCache.put(1, 1);            // cache is {1=1}
  lRUCache.put(2, 2);            // cache is {1=1, 2=2}
  ASSERT_EQ(lRUCache.get(1), 1); // return 1
  lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
  ASSERT_EQ(lRUCache.get(2), -1); // returns -1 (not found)
  lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
  ASSERT_EQ(lRUCache.get(1), -1); // return -1 (not found)
  ASSERT_EQ(lRUCache.get(3), 3);  // return 3
  ASSERT_EQ(lRUCache.get(4), 4);  // return 4
};
TEST(LRU, SingleCache) {
  Medium::LRUCache lRUCache(1);
  lRUCache.put(2, 1);
  ASSERT_EQ(lRUCache.get(2), 1); // Return 1
  lRUCache.put(3, 2);
  ASSERT_EQ(lRUCache.get(2), -1); // Return -1 (not found)
  ASSERT_EQ(lRUCache.get(3), 2);  // Return 2
}
} // namespace
