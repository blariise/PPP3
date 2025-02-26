/*
Use the example above as a model for a program that converts yen ('y'), kroner ('k'),
and pounds ('p') into dollars. If you like realism, you can find conversion rates on
the Web.
*/
#include <iostream>

int main() {
  double amount {};
  char unit {};
  std::cout << "Conert to usd: ";
  std::cin >> amount >> unit;

  if (unit == 'y')
    std::cout << amount << " yen is " << amount * 0.0067 << " usd\n";

  if (unit == 'k')
    std::cout << amount << " kroner is " << amount * 0.09 << " usd\n";

  if (unit == 'p')
    std::cout << amount << " pounds is " << amount * 1.27 << " usd\n";
  return 0;
}
