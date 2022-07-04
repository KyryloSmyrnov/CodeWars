std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  
  std::map<int, int> table;
  
  for(int i = 0; i < numbers.size(); ++i)
    table[numbers[i]] = i;
  
  for(int i = 0; i < numbers.size(); ++i)
    if(table[target - numbers[i]] && table[target - numbers[i]] != i)
      return {table[target - numbers[i]], i};
}
