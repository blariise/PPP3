#include <iostream>
#include <vector>

int main() {
  std::string str_num {};
  std::cin >> str_num;
  
  std::vector<int> t_numbers {};
  for (auto letter : str_num)
    t_numbers.push_back(letter - '0');

  std::vector<std::string> place_names { "thousand", "hundred", "ten", "one" };
  
  std::size_t start { std::size(place_names) - std::size(t_numbers) };
  std::cout << str_num << " is";
  for (std::size_t i { 0 }; i < std::size(t_numbers); ++i) {
    if (std::size(t_numbers) > 1 && i != 0)
      std::cout << " and";

    std::cout << ' ' << t_numbers[i] << ' ' << place_names[start];
    if (t_numbers[i] > 1)
      std::cout << "s";
    ++start;
  }
  return 0;
}
