#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> numbers{};
  int input_number {};
  while (std::cin >> input_number) {
    numbers.push_back(input_number);
    if (std::size(numbers) == 2) {
      std::ranges::sort(numbers);
      std::cout << "the smaller value is: " << numbers[0] << '\n';
      std::cout << "the larger value is: " << numbers[1] << '\n';
    }
  }
  return 0;
}
