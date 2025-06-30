#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::int64_t n{600'851'475'143};
  int i{2};
  std::vector<std::int64_t> factors{};

  while (i * i <= n) {
    if (n % i == 0) {
      n /= i;
      factors.push_back(i);
    } else
      ++i;
  }

  if (n > 1) {
    factors.push_back(n);
  }

  std::cout << *std::max_element(factors.begin(), factors.end()) << '\n';
}
