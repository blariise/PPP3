#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> names {};
  std::vector<int> scores {};
  std::string name {};
  int score {};
  bool name_twice {};

  std::cout << "Enter name and score ex. Simon 1337:\n";
  while (std::cin >> name >> score) {
    name_twice = false;

    if (name == "NoName" && score == 0)
      break;

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
  
  bool isName {};
  std::cout << "Enter names to find scores:\n"; 
  while (std::cin >> name) {
    isName = false;

    if (name == "exit")
      break;

    for (std::size_t i { 0 }; i < std::size(names); ++i) {
      if (name == names[i]) {
        std::cout << "Score: " << scores[i] << '\n';
        isName = true;
      }
    }
    if (!isName)
      std::cout << "name not found\n";
  }
  
  bool isScore {};
  std::cout << "Enter scores to find names:\n"; 
  while (std::cin >> score) {
    isScore = false;

    if (score == -1)
      break;

    for (std::size_t i { 0 }; i < std::size(scores); ++i) {
      if (score == scores[i]) {
        std::cout << "Name: " << names[i] << '\n';
        isScore = true;
      }
    }
    if (!isScore)
      std::cout << "score not found\n";
  }
  return 0;
}
