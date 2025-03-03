#include "../../PPPheaders.h"

double sumVector(const vector<double>& v, int n) {
  if (n > std::size(v))
    error("You asked for more numbers than You add!\n");
  if (n < 1)
    error("Wrong number of values you want to sum!\n");
  double sum { 0 };
  std::cout << "The sum of the first " << n << " numbers ( ";
  for (std::size_t i { 0 }; i < n; ++i) {
    std::cout << v[i] << ' ';
    sum += v[i];
  }
  std::cout << ")is ";
  return sum;
}

vector<double> differences(const vector<double>& v) {
  vector<double> diff {};
  for (std::size_t i { 1 }; i < std::size(v); ++i) {
    diff.push_back(v[i] - v[i -1]);
  }
  return diff;
}

int main() {
  std::cout << "Please enter the number of values you want to sum: ";
  int n {};
  std::cin >> n;
  
  vector<double> numbers {};
  std::cout << "Enter some integers (press '|' ro stop): ";
  for (double num {}; std::cin >> num;)
    numbers.push_back(num);
 
  vector<double> diff { differences(numbers) };
  for (auto z : diff)
    std::cout << z << ' ';
  std::cout << '\n';
  std::cout << sumVector(numbers, n);
  
  return 0;
}
