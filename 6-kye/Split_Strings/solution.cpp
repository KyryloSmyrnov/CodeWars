#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
  if(s.empty()) return {};
  
  std::vector<std::string> result;

  
  for (unsigned long i = 0; i < s.length(); i = i + 2)
    result.push_back(s.substr(i, 2));
  
  
  if (result[result.size()-1].length() == 1)
    result[result.size()-1] += '_';
  
  
  return result;
}
