#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers{};
  int input_number {};
  while (std::cin >> input_number) {
    numbers.push_back(input_number);
    if (std::size(numbers) == 2) {
      for (const auto num : numbers) {
        std::cout << num << " ";
      }
      std::cout << '\n';
    }
  }
  return 0;
}
