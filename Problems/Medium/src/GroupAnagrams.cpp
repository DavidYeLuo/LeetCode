#include "GroupAnagrams.h"
#include <algorithm>
#include <unordered_map>

Medium::GroupAnagrams::GroupAnagrams() {}

std::vector<std::vector<std::string>>
Medium::GroupAnagrams::groupAnagrams(std::vector<std::string> &strs) {
  std::vector<std::vector<std::string>> result;

  std::unordered_map<std::string, std::vector<std::string>> map;

  for (int i = 0; i < strs.size(); i++) {
    std::string hash = strs[i];
    std::sort(hash.begin(), hash.end());
    map[hash].push_back(strs[i]);
  }

  for (const auto &[key, value] : map) {
    result.push_back(value);
  }
  return result;
}
