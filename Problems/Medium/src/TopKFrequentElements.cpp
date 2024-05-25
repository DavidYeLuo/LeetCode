#include "TopKFrequentElements.h"
#include <string>

using std::string;

Medium::TopKFrequentElements::TopKFrequentElements() {}

std::vector<int>
Medium::TopKFrequentElements::topKFrequentElements(std::vector<int> &nums,
                                                   int k) {
  std::vector<int> result;
  std::unordered_map<int, int> numFreq(0);
  std::vector<std::vector<int>> freqNum(nums.size() + 1);
  for (int i = 0; i < nums.size(); i++) {
    if (numFreq.find(nums[i]) == numFreq.end()) {
      numFreq[nums[i]] = 1;
    } else {
      numFreq[nums[i]]++;
    }
  }
  for (const auto &[num, freq] : numFreq) {
    freqNum[freq].push_back(num);
  }
  int count = 0;
  for (int i = freqNum.size() - 1; i >= 0; i--) {
    if (count == k)
      return result;
    if (freqNum[i].empty())
      continue;
    for (const auto &element : freqNum[i]) {
      result.push_back(element);
      count++;
    }
  }
  return result;
}
