#include <cmath>
#include <iostream>
#include <vector>

std::vector<double> quadraticEquation(double a, double b, double c) {
  double x1 { (-b + std::sqrt( (b*b) - (4 * a * c ))) / (2 * a) };
  double x2 { (-b - std::sqrt( (b*b) - (4 * a * c ))) / (2 * a) };  
  return {x1, x2};
}

int main() {
  std::cout << "Enter a b c to solve quadratic equation\n";
  double a {};
  std::cout << "a: ";
  std::cin >> a;
  double b {};
  std::cout << "b: ";
  std::cin >> b;
  double c {};
  std::cout << "c: ";
  std::cin >> c;
  std::vector<double> equation { quadraticEquation(a, b, c)};
  std::cout << "x1: " << equation[0] << '\n';
  std::cout << "x2: " << equation[1] << '\n';
  return 0;
}
