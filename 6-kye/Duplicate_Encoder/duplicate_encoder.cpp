#include <string>
std::string duplicate_encoder(const std::string& word){
  
  std::string s = word;
  std::map<char, int> m;
  
  
  for (int i = 0; i < s.length(); ++i)
  {
    s[i] = tolower(s[i]);
    if (m.find(s[i]) != m.end())
      m[s[i]] = 2;
    else
      m.insert(std::pair<char, int>(s[i], 1));
  }

  
  for (int i = 0; i < s.length(); ++i)
  {
    if (m[s[i]] == 1)
      s[i] = '(';
    else
      s[i] = ')';
  }
  
  
  return s;
}
