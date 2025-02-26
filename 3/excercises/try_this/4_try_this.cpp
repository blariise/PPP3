/*
Rewrite the character value example from the previous TRY THIS to use a for-statement. Then modify your program to also write out a table of the integer values for
uppercase letters and digits.
*/
#include <iostream>

int main() {
  for (char i { 'a' }; i <= 'z'; ++i) {
    int num { i };
    std::cout << i << ' ' << num << '\n';
  }
  std::cout << '\n';
  for (char i { 'A' }; i <= 'Z'; ++i) {
    int num { i };
    std::cout << i << ' ' << num << '\n';
  }
  std::cout << '\n';
  for (char i { '0' }; i <= '9'; ++i) {
    int num { i };
    std::cout << i << ' ' << num << '\n';
  }
  return 0;
}
