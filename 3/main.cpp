#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<double> numbers{};
  double input_number {};
  while (std::cin >> input_number) {
    numbers.push_back(input_number);
    if (std::size(numbers) == 2) {
      std::ranges::sort(numbers);
      if (numbers[0] == numbers[1]) {
        std::cout << "the numbers are equal\n";
      } else { 
        std::cout << "the smaller value is: " << numbers[0] << '\n';
        std::cout << "the larger value is: " << numbers[1] << '\n';
        if (numbers[1] - numbers[0] < 0.01)
          std::cout << "the numbers are almost equal\n";
      }
    }
  }
  return 0;
}
