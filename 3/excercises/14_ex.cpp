#include <iostream>
#include <vector>

bool isPrime(int num, std::vector<int>& primes) {
  for (const auto& prime : primes) {
    if (num % prime == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  std::cout << "How many prime numbers you want to get?: ";
  int num {};
  std::cin >> num;

  std::vector<int> primes {};
  int i { 2 };
  while (std::size(primes) < num) {
    if (num < 1) {
      std::cout << "Number has to be positive";
      break;
    }
    if (isPrime(i, primes)) {
      primes.push_back(i);
    }
    ++i;
  }

  for (const auto& p : primes) {
    std::cout << p << " ";
  }
  std::cout << '\n';
  return 0;
}
