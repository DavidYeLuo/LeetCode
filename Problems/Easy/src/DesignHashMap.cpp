#include "DesignHashMap.h"

Easy::Node::Node(int key, int val) {
  this->key = key;
  this->val = val;
  this->next = nullptr;
}
Easy::DesignHashMap::DesignHashMap() {
  v = std::vector<Node *>(HASH_SET_SIZE, new Easy::Node(-1, -1));
}

void Easy::DesignHashMap::put(int key, int value) {
  Node *curr = v[key % HASH_SET_SIZE];

  while (curr->next) {
    curr = curr->next;
    if (curr->key == key) {
      curr->val = value;
      return;
    }
  }
  curr->next = new Node(key, value);
}
int Easy::DesignHashMap::get(int key) {
  Node *curr = v[key % HASH_SET_SIZE];

  while (curr->next) {
    curr = curr->next;
    if (curr->key == key) {
      return curr->val;
    }
  }
  return -1;
}
void Easy::DesignHashMap::remove(int key) {
  Node *curr = v[key % HASH_SET_SIZE];

  while (curr->next) {
    if (curr->next->key == key) {
      Node *temp = curr->next;
      curr->next = curr->next->next;
      temp->next = nullptr;
      delete temp;
      return;
    }
    curr = curr->next;
  }
}
