/*
Rewrite your currency converter program from the previous TRY THIS to use a
switch-statement. Add a conversion from Swiss francs. Which version of the program is easier to write, understand, and modify? Why?
*/
#include <iostream>

int main() {
  double amount {};
  char unit {};
  std::cout << "Conert to usd: ";
  std::cin >> amount >> unit;

  switch (unit) {
    case 'y':
      std::cout << amount << " yen is " << amount * 0.0067 << " usd\n";
      break;
    case 'k':
      std::cout << amount << " kroner is " << amount * 0.09 << " usd\n";
      break;
    case 'p':
      std::cout << amount << " pounds is " << amount * 1.27 << " usd\n";
      break;
    case 'c':
      std::cout << amount << " swiss francs is " << amount * 1.12 << " usd\n";
      break;
    default:
      break;
  }
    
  return 0;
}
