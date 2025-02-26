/*
Implement square() without using the multiplication operator; that is, do the x∗x by
repeated addition (start a variable result at 0 and add x to it x times). Then run some
version of ‘‘the first program’’ using that square().
*/
#include <iostream>

int square(int x) {
  int sum { 0 };
  for (int i { 1 }; i <= x; ++i) {
    sum += x;
  }
  return sum;
}

int main() {
  int number { 6 };
  std::cout << "square of " << number << " is " << square(number);
  return 0;
}
