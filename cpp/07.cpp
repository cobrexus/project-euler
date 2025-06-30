#include <iostream>
#include <vector>

bool is_prime(int n) {
  if (n < 2) {
    return false;
  }

  int i{2};

  while (i * i <= n) {
    if (n % i == 0) {
      return false;
    } else {
      i += 1;
    }
  }

  return true;
}

int main() {
  std::vector<int> primes{};
  int i{};

  while (primes.size() < 10'001) {
    if (is_prime(i)) {
      primes.push_back(i);
    }

    i += 1;
  }

  std::cout << primes.back() << '\n';
}
