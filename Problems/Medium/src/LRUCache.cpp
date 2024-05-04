#include "LRUCache.h"
#include <cstdio>

Medium::Node::Node(int key, int val) {
  this->key = key;
  this->val = val;
  next = NULL;
  prev = NULL;
}

Medium::LRUCache::LRUCache(int capacity) {
  this->capacity = capacity;

  // Dummy
  head = new Medium::Node(-1, -8000);
  tail = new Medium::Node(-1, -9000);
  head->next = tail;
  tail->prev = head;
}

int Medium::LRUCache::get(int key) {
  if (m.find(key) == m.end())
    return -1;
  else {
    // Update head
    Node *removed_node = m[key];
    remove_node(removed_node);
    add_head(removed_node);
    return m[key]->val;
  }
}

void Medium::LRUCache::remove_node(Node *node) {
  Node *prev = node->prev;
  Node *next = node->next;

  if (prev != nullptr) {
    prev->next = next;
  }
  if (next != nullptr) {
    next->prev = prev;
  }
}

// inserts it on the right of the Node
void Medium::LRUCache::add_head(Node *new_head) {
  new_head->prev = head;
  new_head->next = head->next;
  head->next = new_head;
  // Update next next
  new_head->next->prev = new_head;
}

void Medium::LRUCache::put(int key, int value) {
  if (m.find(key) != m.end()) {
    Node *desired_node = m[key];
    remove_node(desired_node);
    add_head(desired_node);
    desired_node->val = value;
    return;
  }
  if (m.size() == capacity) {
    // reuuse
    Node *prev_tail = tail->prev;
    remove_node(prev_tail);
    add_head(prev_tail);

    // Update Map
    m.erase(prev_tail->key);
    prev_tail->val = value;
    prev_tail->key = key;
    m[key] = prev_tail;
    return;
  }

  Node *new_node = new Node(key, value);
  add_head(new_node);
  m[key] = new_node;
}
