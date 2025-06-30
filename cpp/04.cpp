#include <iostream>

bool is_palindrome(int n) {
  int m{n};
  int l{};

  while (m > 0) {
    l *= 10;
    l += m % 10;
    m /= 10;
  }

  return l == n;
}

int main() {
  int largest{};

  for (int i{100}; i < 1000; ++i) {
    for (int j{100}; j < 1000; ++j) {
      if (is_palindrome(i * j) && i * j > largest) {
        largest = i * j;
      }
    }
  }

  std::cout << largest << '\n';
}
