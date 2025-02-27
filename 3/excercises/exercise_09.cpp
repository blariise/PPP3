#include <iostream>

int main() {
  int grains {};
  int gift { 1 };
  int iter { 0 };
  bool thousand_displayed { false };
  bool milion_displayed { false };
  while (grains < 1'000'000'000) {
    ++iter;
    grains += gift;
    if (grains > 1000 && !thousand_displayed) {
      std::cout << "To get at least 1,000 grains you need " << iter << " squares.\n";
      thousand_displayed = true;
    }
    if (grains > 1'000'000 && !milion_displayed) {
      std::cout << "To get at least 1,000,000 grains you need " << iter << " squares.\n";
      milion_displayed = true;
    }
    gift *= 2;
  }
  std::cout << "To get at least 1,000,000,000 grains you need " << iter << " squares.\n";
  return 0;
}
