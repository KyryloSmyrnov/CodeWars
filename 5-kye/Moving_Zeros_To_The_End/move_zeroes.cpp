#include <vector>
#include <algorithm>

auto move_zeroes(std::vector<int> input) {
  
  std::stable_partition(input.begin(), input.end(), [] (int n) {return -n;});
  return input;
}
