#include <iostream>
#include <vector>

int main() {
  std::vector<double> numbers {};
  double input_values {};
  while (std::cin >> input_values) {
    numbers.push_back(input_values);
  }

  double sum { 0 };
  double largest { 0 };
  double smallest { 0 };
  for (std::size_t i { 0 }; i < std::size(numbers); ++i) {
    sum += numbers[i];
    if (i == 0) {
      largest = numbers[i];
      smallest = numbers[i];
      continue;
    }
    
    if (largest < numbers[i] - numbers[i - 1])
      largest = numbers[i] - numbers[i - 1];

    if (smallest > numbers[i] - numbers[i - 1])
      smallest = numbers[i] - numbers[i - 1];
  }
  std::cout << "sum of all distances= " << sum << '\n';
  std::cout << "smallest distance between two neighboring cities " << smallest << '\n';
  std::cout << "greatest distance between two neighboring cities " << largest << '\n';
  return 0;
}
