#include <iostream>
#include <vector>

class Name_value {
public:
  Name_value(std::string& name, int value): m_name { name }, m_value { value } {}
  std::string getName() { return m_name; }
  int getValue() { return m_value; }
private:
  std::string m_name {};
  int m_value {};
};

int main() {
  std::vector<Name_value> name_value {};
  std::string name {};
  int score {};
  bool name_twice {};

  std::cout << "Enter name and score ex. Simon 1337:\n";
  while (std::cin >> name >> score) {
    name_twice = false;

    if (name == "NoName" && score == 0)
      break;

    for (auto& n : name_value) {
      if (name == n.getName()) {
        std::cout << "You entered name twice!\n";
        name_twice = true;
        break;
      }
    }
    if (!name_twice) {
      name_value.push_back({name, score});
    }
  }

  
  bool isName {};
  std::cout << "Enter names to find scores:\n"; 
  while (std::cin >> name) {
    isName = false;

    if (name == "exit")
      break;

    for (auto& n : name_value) {
      if (n.getName() == name) {
        std::cout << "Score: " << n.getValue() << '\n';
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
    
    for (auto& n : name_value) {
      if (n.getValue() == score) {
        std::cout << "Name: " << n.getName() << '\n';
        isScore = true;
      }
    }
    if (!isScore)
      std::cout << "score not found\n";
  }
  return 0;
}
