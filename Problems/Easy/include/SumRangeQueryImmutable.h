#include <vector>
namespace Easy {
class SumRangeQueryImmutable {
private:
  std::vector<int> prefix_sum;

public:
  SumRangeQueryImmutable(std::vector<int> &nums);
  int sumRange(int left, int right);
};
} // namespace Easy
