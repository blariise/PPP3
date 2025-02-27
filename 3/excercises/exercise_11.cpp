#include <iostream>
#include <vector>

std::string chooseGesture(const std::vector<std::string>& v, int seed) {
  std::size_t len { std::size(v) };
  return v[seed % 3];
}

int main() {
  std::vector<std::string> next_gesture { "rock", "paper", "scissors", "paper", "paper", "scissors", "paper", "rock", "scissors", "rock" };
  int seed {};
  int player_score { 0 };
  int bot_score { 0 };
  std::cout << "Enter seed: ";
  std::cin >> seed;
  int pos { seed % 3 };
  std::cout << "Lets play rock paper scissors to 3 wins!\n";

  while(true) {
    char bot_hand { next_gesture[pos][0] };
    std::cout << "Your gesture:\n1 - rock\n2 - paper\n3 - scissors\n(1 - 3):";
    int player_hand {};
    std::cin >> player_hand;
    switch (player_hand) {
      case 1:
        if (bot_hand == 'r') {
          std::cout << "Tie\n";
        }
        if (bot_hand == 'p') {
          std::cout << "Lose\n";
          ++bot_score;
        }
        if (bot_hand == 's') {
          std::cout << "Win\n";
          ++player_score;
        }
        break;
      case 2:
        if (bot_hand == 'r') {
          std::cout << "Win\n";
          ++player_score;
        }
        if (bot_hand == 'p') {
          std::cout << "Tie\n";
          continue;
        }
        if (bot_hand == 's') {
          std::cout << "Lose\n";
          ++bot_score;
        }
        break;
      case 3:
        if (bot_hand == 'r') {
          std::cout << "Lost\n";
          ++bot_score;
        }
        if (bot_hand == 'p') {
          std::cout << "Win\n";
          ++player_score;
        }
        if (bot_hand == 's') {
          std::cout << "Tie\n";
        }
        break;
      default:
        break;
    }
    ++pos;
    if (player_score == 3) {
      std::cout << "Congratz, You won!\n";
      break;
    }
    if (bot_score == 3) {
      std::cout << "Unlucky, You lost!\n";
      break;
    }
  }
  return 0;
}
