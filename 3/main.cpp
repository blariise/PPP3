#include <iostream>
#include <vector>

int main() {
  std::vector<double> numbers{};
  double input_number {};
  std::string unit {};
  double largest {};
  double smallest {};
  bool is_first_iter { true };
  while (std::cin >> input_number >> unit) { 
    double converted_value {};
    if (unit == "cm") {
      converted_value = input_number;
    } else if (unit == "m") {
      converted_value = input_number * 100;
    } else if (unit == "in") {
      converted_value = input_number * 2.54;
    } else if (unit == "ft") {
      converted_value = input_number * 30.48;
    } else {
      continue;
    }

    if (is_first_iter) {
      smallest = converted_value;
      largest = converted_value;
      is_first_iter = false;
      continue;
    } else {
      if (converted_value < smallest) {
        smallest = converted_value;
        std::cout << "the smallest so far\n";
      } else if  (converted_value > largest) {
        largest = converted_value;
        std::cout << "the largest so far\n";
      }
    }
  }
  return 0;
}
