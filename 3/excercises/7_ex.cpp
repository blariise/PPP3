#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> digit_words { "zero", "one",
                                         "two", "three", 
                                         "four", "five", 
                                         "six", "seven", 
                                         "eight", "nine", 
                                         "ten" };
  int num {};
  std::cin >> num;
  std::cout << digit_words[num] << '\n';
  return 0;
}
