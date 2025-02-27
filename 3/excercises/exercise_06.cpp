#include <cctype>
#include <iostream>
#include <vector>

int wordToInt(const std::string& s, std::vector<std::string> words) {
  for (std::size_t i { 0 }; i < std::size(words); ++i) {
    if (s == words[i])
      return i;
  }
  return -1;
}

bool isDigit(const std::string& s) {
  return std::size(s) == 1;
}

int main() {
  std::string x {};
  std::string y {};
  char sign {};
  std::vector<std::string> digit_words {
    "zero", "one",
    "two", "three", 
    "four", "five", 
    "six", "seven", 
    "eight", "nine"
  };

  std::cout << "Enter three argument in format (num1 num2 sign) ex. (seven 2 +): ";
  std::cin >> x >> y >> sign;

  int num1 {};
  int num2 {};
  if (isDigit(x))
    num1 = x[0] - '0';
  else
    num1 = wordToInt(x, digit_words);
  if (isDigit(y))
    num2 = (int)y[0] - '0';
  else
    num2 = wordToInt(x, digit_words);

  switch (sign) {
    case '+':
      std::cout << "The sum of " << x << " and " << y 
                << " is " << num1 + num2 << '\n';
      break;
    case '-':
      std::cout << "The subtract of " << x << " and " << y 
                << " is " << num1 - num2 << '\n';
      break;
    case '*':
      std::cout << "The multiply of " << x << " and " << y 
                << " is " << num1 * num2 << '\n';
      break;
    case '/':
      std::cout << "The divide of " << x << " and " << y 
                << " is " << num1 / num2 << '\n';
      break;
    default:
      std::cout << "Wrong input\n";
      break;
  } 
  return 0;
}
