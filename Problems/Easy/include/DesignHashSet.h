#pragma once
#include <cmath>
#include <vector>
#define HASH_SET_SIZE 10000
namespace Easy {
class Node {
public:
  int key;
  Node *next;
  Node(int key);
};
class DesignHashSet {
public:
  std::vector<Node *> v;
  DesignHashSet();
  void add(int key);
  bool contains(int key);
  void remove(int key);
};
} // namespace Easy
