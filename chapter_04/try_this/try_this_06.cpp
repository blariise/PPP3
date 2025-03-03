#include "../../PPPheaders.h"

int area(int length, int width) {
// the arguments are positive
  expect([&]{ return 0<length && 0<width; }, "bad arguments to area()");
  int a = length * width;
  expect([&]{ return 0<a; }, "bad area() result");
  return a;
}

int main() {
  area(1000, 2133213213);
  return 0;
}
