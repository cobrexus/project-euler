#include <iostream>

int main() {
    int a{1};
    int b{2};
    int c{};
    int temp{};

    while (b < 4'000'000) {
        if (b % 2 == 0) {
            c += b;
        }

        temp = a;
        a = b;
        b += temp;
    }

    std::cout << c << '\n';
}
