#include "../../PPPheaders.h"

vector<int> getAnswer() {
  vector<int> result {};
  result.push_back(random_int(0, 9));
  bool is_in { false };
  while (std::size(result) < 4) {	  
    is_in = false;
    int x = random_int(0,9);
    for (const auto num : result) {
      if (x == num)
        is_in = true;
    } 
    if (is_in)
      continue;
    else 
      result.push_back(x);
  }
  return result;
}

int main() {
  std::cout << "Bulls and Cows\n";
  while (true) {
    std::cout << "Enter a seed: ";
    int s {};
    std::cin >> s;
    seed(s);
    
    vector<int> answer { getAnswer() };
    for (auto y : answer)
      std::cout << y << ' ';
    while (true) {
      std::cout << "Enter 4 digit number: ";
      int user_guess {};
      std::cin >> user_guess;
      int first { user_guess / 1000 % 10 };
      int second { user_guess / 100 % 10};
      int third { user_guess / 10 % 10};
      int fourth { user_guess % 10}; 
      vector<int> user {first, second, third, fourth};
      if (user == answer) {
        std::cout <<"You win!\n";
        break;
      }
      int bulls { 0 };
      int cows { 0 };
      for (std::size_t i { 0 }; i < std::size(answer); ++i) {
        for (std::size_t j { 0 }; j < std::size(user); ++j) {
          if (answer[i] == user[j]) {
            if (i == j)
	      ++bulls;
	    else
	      ++cows;
          }
        }
      }
      if (bulls > 1)
        std::cout << bulls << " bulls ";
      else
        std::cout << bulls << " bull ";

      std::cout << "and ";
      if (cows > 1)
        std::cout << cows << " cows\n";
      else
        std::cout << cows << " cow\n";
    }
  }
  return 0;
}
