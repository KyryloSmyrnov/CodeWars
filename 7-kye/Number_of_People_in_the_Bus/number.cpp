#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops) {
  
  unsigned int total = 0;

  for (auto pair : busStops)
  {
    total = total + pair.first - pair.second;
  }

  return total;
}
