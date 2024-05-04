#pragma once
#include <vector>
namespace Easy {
class DesignHashSet {
public:
  std::vector<int> v;
  DesignHashSet() {}
  void add(int key);
  bool contains(int key);
  void remove(int key);
};
} // namespace Easy
