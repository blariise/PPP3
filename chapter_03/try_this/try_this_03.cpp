/*
The character 'b' is char(’a’+1), 'c' is char(’a’+2), etc. Use a loop to write out a table of
characters with their corresponding integer values:
a 97
b 98
...
z 122
*/
#include <iostream>

int main() {
  int i { 97 };
  while (i <= 122) {
    std::cout << static_cast<char>(i) << ' ' << i << '\n';
    ++i;
  }
  return 0;
}
