#include "../../PPPheaders.h"

vector<char> getAnswer() {
  vector<char> result {};
  bool is_in { false };
  while (std::size(result) < 4) {	  
    is_in = false;
    int x = random_int((char)97,122);
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
    
    vector<char> answer { getAnswer() };
    for (auto y : answer)
      std::cout << y << ' ';
 
    while (true) {
      std::cout << "Enter 4 digit number: ";
      string user_guess {};
      std::cin >> user_guess;
      if (std::size(user_guess) != 4)
        continue;
      char first  { user_guess[0] };
      char second { user_guess[1] };
      char third  { user_guess[2] };
      char fourth { user_guess[3] }; 
      vector<char> user {first, second, third, fourth};
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
