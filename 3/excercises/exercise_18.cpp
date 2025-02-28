#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> names {};
  std::vector<int> scores {};
  std::string name {};
  int score {};
  bool name_twice {};
  while (std::cin >> name >> score) {
    name_twice = false;
    if (name == "NoName" && score == 0) {
      break;
    }
    for (const auto& n : names) {
      if (name == n) {
        std::cout << "You entered name twice!\n";
        name_twice = true;
        break;
      }
    }
    if (!name_twice) {
      names.push_back(name);
      scores.push_back(score);
    }
  }

  for (std::size_t i { 0 }; i < std::size(names); ++i) {
    std::cout << '(' << names[i] << ',' << scores[i] << ")\n";
  }
  return 0;
}
