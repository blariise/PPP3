#include <iostream>
#include <cassert>

double ctok(double c) { // converts Celsius to Kelvin
  assert(c >= -273.15);
  return c + 273.15;
}

double ktoc(double k) {
  assert(k >= 0);
  return k - 273.15;
}

double ctof(double c) {
  assert(c >= -273.15);
  return c * 33.8;
}

double ftoc(double f) {
  assert(f >= -458.67);
  return f / 33.8;
}

int main() {
  double c = 0; // declare input variable
  std::cout << "Convert celsius to kelvin: ";
  std::cin >> c; // retrieve temperature to input variable
  double k = ctok(c); // convert temperature
  std::cout << c << " celsius = " << k << " kelvin\n"; // print out temperature
  
  std::cout << 10 << "F = " << ftoc(10) << "C\n";

  return 0;
}

