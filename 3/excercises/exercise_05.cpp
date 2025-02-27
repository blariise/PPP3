#include <iostream>

int main() {
  int to_guess { 50 };
  int max { 100 };
  int min { 1 };
  char guess {};
  int guess_count { 0 };
  while (guess_count < 7) {
    std::cout << "Is the number you are thinking of less than " 
              << to_guess << "?(y/n): ";
    std::cin >> guess;
    switch (guess) {
      case 'y':
        max = to_guess;
        to_guess = (to_guess - min) / 2 + min;
        ++guess_count;
        break;
      case 'n':
        min = to_guess;
        to_guess = (max - to_guess) / 2 + to_guess;
        ++guess_count;
        break;
      default:
        continue;
    }
  }
  std::cout << "Number you thinking of is " << to_guess << '\n';
  return 0;
}
