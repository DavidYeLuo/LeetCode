#pragma once
#include <vector>
#define HASH_SET_SIZE 10000
namespace Easy {
class Node {
public:
  int key;
  int val;
  Node *next;
  Node(int key, int val);
};
class DesignHashMap {
private:
  std::vector<Node *> v;

public:
  DesignHashMap();

  void put(int key, int value);
  int get(int key);
  void remove(int key);
};
} // namespace Easy
