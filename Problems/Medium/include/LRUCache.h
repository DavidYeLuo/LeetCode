#pragma once
#include <map>
#include <vector>
namespace Medium {
struct Node {
  int key;
  int val;
  Node *next;
  Node *prev;
  std::vector<int> refs;
};
class LRUCache {
private:
  std::map<int, Node *> m;
  int capacity;
  Node *head;
  Node *tail;
  void insert_head(Node *new_head);
  void remove_node(Node *node);

public:
  LRUCache(int capacity);
  int get(int key);
  void put(int key, int value);
};
} // namespace Medium
