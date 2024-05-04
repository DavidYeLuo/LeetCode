#include "DesignHashSet.h"
void Easy::DesignHashSet::add(int key) {
  if (contains(key))
    return;
  v.push_back(key);
}
bool Easy::DesignHashSet::contains(int key) {
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == key)
      return true;
  };
  return false;
}
void Easy::DesignHashSet::remove(int key) {
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == key) {
      v.erase(v.begin() + i);
      break;
    }
  }
}
