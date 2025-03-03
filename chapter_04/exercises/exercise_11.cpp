#include <iostream>
// max w int 46
int maxFib(int n) {
  int num { 1 };
  int prev1 { 0 };
  int prev2 { 1 };
  std::cout << 0 << ' ';
  for (int i { 0 }; i < n; ++i) {
    std::cout << num << ' ';
    num = prev1 + prev2;
    prev1 = prev2;
    prev2 = num;
  }
  return num;
}

int main() {
  std::cout << "Calculate N numbers of fibonacci sequence: ";
  int n {};
  std::cin >> n;
  maxFib(n);
  return 0;
}
