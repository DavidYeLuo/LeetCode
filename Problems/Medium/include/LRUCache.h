#pragma once
#include <unordered_map>
namespace Medium {
class Node {
public:
  int key;
  int val;
  Node *next;
  Node *prev;

  Node(int key, int val);
};
class LRUCache {
private:
  std::unordered_map<int, Node *> m;
  int capacity;
  Node *head;
  Node *tail;
  void add_head(Node *new_head);
  void remove_node(Node *node);

public:
  LRUCache(int capacity);
  int get(int key);
  void put(int key, int value);
};
} // namespace Medium
