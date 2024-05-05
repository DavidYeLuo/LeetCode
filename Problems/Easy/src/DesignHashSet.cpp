#include "DesignHashSet.h"
Easy::Node::Node(int key) {
  this->key = key;
  next = nullptr;
}
Easy::DesignHashSet::DesignHashSet() {
  v = std::vector<Node *>();
  v.resize(HASH_SET_SIZE, new Node(-1));
}
void Easy::DesignHashSet::add(int key) {
  Node *curr = v[key % HASH_SET_SIZE];
  while (curr->next) {
    curr = curr->next;
    if (curr->key == key) {
      return;
    }
  }
  curr->next = new Node(key);
}
bool Easy::DesignHashSet::contains(int key) {
  Node *curr = v[key % HASH_SET_SIZE];
  while (curr->next) {
    if (curr->next->key == key)
      return true;
    curr = curr->next;
  }
  return false;
}
void Easy::DesignHashSet::remove(int key) {
  Node *curr = v[key % HASH_SET_SIZE];
  while (curr->next) {
    if (curr->next->key == key) {
      Node *temp = curr->next;
      curr->next = curr->next->next;
      delete temp;
      break;
    }
    curr = curr->next;
  }
}
