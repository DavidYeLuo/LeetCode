#include "GroupAnagrams.h"
#include <algorithm>
#include <unordered_map>

Medium::GroupAnagrams::GroupAnagrams() {}

std::vector<std::vector<std::string>>
Medium::GroupAnagrams::groupAnagrams(std::vector<std::string> &strs) {
  std::vector<std::vector<std::string>> result;

  std::unordered_map<std::string, std::unordered_map<std::string, int>> map;

  for (int i = 0; i < strs.size(); i++) {
    std::string sorted_string = strs[i];
    std::sort(sorted_string.begin(), sorted_string.end());
    if (map.find(sorted_string) == map.end()) {
      map[sorted_string] = std::unordered_map<std::string, int>();
      map[sorted_string][strs[i]] = 1;
    } else {
      map[sorted_string][strs[i]]++;
    }
  }

  for (const auto &[key, value] : map) {
    std::vector<std::string> temp;
    for (const auto &[innerKey, innerValue] : value) {
      for (int i = 0; i < innerValue; i++) {
        temp.push_back(innerKey);
      }
    }
    result.push_back(temp);
  }

  return result;
}
