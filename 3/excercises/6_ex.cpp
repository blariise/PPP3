#include <iostream>

int main() {
  double x {};
  double y {};
  char sign {};
  std::cout << "Enter three argument in format (num1 num2 sign) ex. (1 2 +): ";
  std::cin >> x >> y >> sign;
  switch (sign) {
    case '+':
      std::cout << "The sum of " << x << " and " << y 
                << " is " << x + y << '\n';
      break;
    case '-':
      std::cout << "The subtract of " << x << " and " << y 
                << " is " << x - y << '\n';
      break;
    case '*':
      std::cout << "The multiply of " << x << " and " << y 
                << " is " << x * y << '\n';
      break;
    case '/':
      std::cout << "The divide of " << x << " and " << y 
                << " is " << x / y << '\n';
      break;
    default:
      std::cout << "Wrong input\n";
      break;
  } 
  return 0;
}
