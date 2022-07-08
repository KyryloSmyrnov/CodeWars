#include <string>
#include <iostream>

std::string to_camel_case(std::string text) {

  for (unsigned long i = 0; i < text.length(); ++i)
      if (text[i] == '-' || text[i] == '_')
      {
          text[i + 1] = toupper(text[i + 1]);
          text.erase(i, 1);
      }
  return text;
}
