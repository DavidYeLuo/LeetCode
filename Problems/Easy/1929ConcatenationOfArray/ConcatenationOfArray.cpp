#include <vector>
class solution {
public:
  std::vector<int> getConcatenation(std::vector<int> &nums) {
    std::vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
      res.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++) {
      res.push_back(nums[i]);
    }
    return nums;
  }
};
