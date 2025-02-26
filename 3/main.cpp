#include <iostream>
#include <vector>

int main() {
  std::vector<double> numbers{};
  double input_number {};
  double largest {};
  double smallest {};
  bool is_first_iter { true };
  while (std::cin >> input_number) {
    if (is_first_iter) {
      smallest = input_number;
      largest = input_number;
      is_first_iter = false;
      continue;
    } else {
      if (input_number < smallest) {
        smallest = input_number;
        std::cout << "the smallest so far\n";
      } else if  (input_number > largest) {
        largest = input_number;
        std::cout << "the largest so far\n";
      }
    }
  }
  return 0;
}
