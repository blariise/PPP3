#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<double> temps;
  for (double temp; std::cin >> temp;)
    temps.push_back(temp);

  double sum = 0;
  for (double x : temps)
    sum += x;
  
  std::cout << "Average temperature: " << sum / temps.size() << '\n';
  std::ranges::sort(temps);

  double median {};
  if (std::size(temps) % 2 == 0)
    median = ((temps[std::size(temps) / 2 - 1]) + (temps[std::size(temps) / 2])) / 2;
  else
    median = temps[temps.size() / 2];

  std::cout << "Median temperature: " << median << '\n';
  return 0;
}
