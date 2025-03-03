#include <iostream>
#include <cmath>

void quadratic(double a, double b, double c) {
  double check { b * b - 4 * a * c};
  double x1 {(-b + sqrt(check)) / (2 * a)};
  double x2 {(-b - sqrt(check)) / (2 * a)};
  if (check < 0) {
    std::cerr << "No real roots\n";
  } else if (check == 0) {
    std::cout << "x1 = " << x1 << '\n';
  } else {
    std::cout << "x1 = "<< x1 << " x2 = " << x2 << '\n';
  }
}

int main() {
  std::cout << "Solve quadratic equation, input a b c\n";
  std::cout << "Enter a: ";
  double a {};
  std::cin >> a;
  std::cout << "Enter b: ";
  double b {};
  std::cin >> b;
  std::cout << "Enter c: ";
  double c {};
  std::cin >> c;
  quadratic(a, b, c);
  return 0;
}
