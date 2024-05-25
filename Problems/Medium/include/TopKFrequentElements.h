#pragma once

#include <unordered_map>
#include <vector>
namespace Medium {
class Node {
public:
  int val;
  int freq;
  Node *left;
  Node *right;
  Node(int val, int freq) : val(val), freq(freq) {}
};
class TopKFrequentElements {
public:
  TopKFrequentElements();
  std::vector<int> topKFrequentElements(std::vector<int> &nums, int k);

private:
  void Remove(Node *node, std::unordered_map<int, Node *> &map);
  void Add(Node *node, Node *rightNode);
};
} // namespace Medium
