/*
Write a program that ‘‘bleeps’’ out words that you don’t like; that is, you read in
words using cin and print them again on cout. If a word is among a few you have
defined, you write out BLEEP instead of that word. Start with one ‘‘disliked word’’
such as
string disliked = "Broccoli";
When that works, add a few more.
*/
#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> disliked {"s1mple", "xd"};
  
  std::string input {};
  std::cin >> input;
  
  bool is_bad_word { false };
  for (const auto& word : disliked) {
    if (input == word)
      is_bad_word = true;
  }
  if (is_bad_word)
    std::cout << "Bleep\n";
  else
    std::cout << input << '\n';
  return 0;
}
