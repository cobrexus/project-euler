#include <iostream>

int main() {
    int x{20};

    while (!(x % 11 == 0 && x % 13 == 0 && x % 14 == 0 && x % 16 == 0 &&
             x % 17 == 0 && x % 18 == 0 && x % 19 == 0 && x % 20 == 0))
        x += 20;

    std::cout << x << '\n';
}
