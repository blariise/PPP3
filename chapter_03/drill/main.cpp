#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

double findMode(const std::vector<double>& v) {
  std::unordered_map<double, int> map_v {};
  int max { 0 };
  double mode {};
  for (const auto num : v) {
    map_v[num]++;
    if (map_v[num] > max) {
      max = map_v[num];
      mode = num;
    }
  }
  return mode;
}

int main() {
  std::vector<double> numbers{};
  double input_number {};
  std::string unit {};
  double largest {};
  double smallest {};
  bool is_first_iter { true };
  int count_numbers { 0 };
  double sum_numbers { 0 };
  while (std::cin >> input_number >> unit) { 
    double converted_value {};
    if (unit == "cm") {
      converted_value = input_number / 100;
    } else if (unit == "m") {
      converted_value = input_number;
    } else if (unit == "in") {
      converted_value = input_number * 0.0254;
    } else if (unit == "ft") {
      converted_value = input_number * 0.3048;
    } else {
      continue;
    }

    ++count_numbers;
    sum_numbers += converted_value;
    numbers.push_back(converted_value);
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
  std::cout << "smallest number(m): " << smallest << '\n';
  std::cout << "largest number(m): " << largest << '\n';
  std::cout << "numbers count: " << count_numbers << '\n';
  std::cout << "sum of numbers(m): " << sum_numbers << '\n';
  std::ranges::sort(numbers);
  for (const auto& num : numbers) {
    std::cout << num << ' ';
  }

  std::cout << '\n';
  std::cout << "mode: " << findMode(numbers) << '\n';

  return 0;
}
