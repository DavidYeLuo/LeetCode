#pragma once
#define HASH_SET_SIZE 10000
namespace Easy {
class DesignHashMap {
public:
  DesignHashMap();

  void put(int key, int value);
  int get(int key);
  void remove(int key);
};
} // namespace Easy
