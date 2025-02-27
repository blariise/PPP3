#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::vector<bool> list {};
  for (int i { 0 }; i < 100; ++i)
    list.push_back(true );

  for (int i { 2 }; i <= 100; ++i) {
    for (int j { i }; j <= 100; j += i) {
      if (j != i)
        list[j - 1] = false;
    }
  }
  list[0] = false;
  
  for (std::size_t i { 0 }; i < std::size(list); ++i) {
    if (list[i] == true)
      std::cout << i + 1 << '\n';
  }
  return 0;
}
