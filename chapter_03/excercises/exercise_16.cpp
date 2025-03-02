#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

std::vector<std::string> findMode(const std::vector<std::string>& v) {
  std::unordered_map<std::string, int> map_v {};
  for (const auto& word : v) {
    map_v[word]++;
  }
  int max { 0 };
  std::vector<std::string> modes {};
  for (const auto& word : map_v) {
    if (word.second > max)
      max = word.second;
  }
  for (const auto& word : map_v) {
    if (word.second == max) {
      modes.push_back(word.first);
    }
  }
  return modes;
}

int main() {
  std::vector<std::string> words {};
  std::cout << "Enter sequence of strings: ";
  std::string word {};
  while(std::cin >> word) {
    words.push_back(word);
  }

  std::ranges::sort(words);

  std::cout << "min: " << words[0] << '\n';
  std::cout << "max: " << words[words.size() - 1] << '\n';
  std::vector<std::string> modes { findMode(words) };
  std::cout << "mode/s: ";
  for (const auto& m : modes) {
    std::cout << m << " ";
  }
  std::cout << '\n';
  return 0;
}
