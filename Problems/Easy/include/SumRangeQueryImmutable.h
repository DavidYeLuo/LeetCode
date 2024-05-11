#include <vector>
namespace Easy {
class SumRangeQueryImmutable {
private:
  std::vector<int> prefixSum;

public:
  SumRangeQueryImmutable(std::vector<int> &nums);
  int sumRange(int left, int right);
};
} // namespace Easy
