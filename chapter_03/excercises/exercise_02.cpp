#include <iostream>

int main() {
  std::string input {};
  std::cin >> input;

  for (std::size_t i { 0 }; i < std::size(input); ++i) {
    char letter { input[i] };
    std::cout << letter << ' ' << static_cast<int>(letter) << '\n';
  }

  return 0;
}
