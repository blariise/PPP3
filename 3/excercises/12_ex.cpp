#include <iostream>
#include <vector>

bool isPrime(int num, const std::vector<int>& primes) {
  if (num < 2)
    return false;
  for (const auto& prime : primes) {
    if (num % prime == 0)
      return false;
  }
  return true;
}

int main() {
  std::vector<int> primes {};

  for (int i { 1 }; i <= 100; ++i) {
    if (isPrime(i, primes))
      primes.push_back(i);
  }

  for (auto a : primes)
    std::cout << a << '\n';
  return 0;
}
