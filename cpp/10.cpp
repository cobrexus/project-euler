#include <iostream>

bool is_prime(std::int64_t n) {
    if (n < 2)
        return false;

    int i{2};

    while (i * i <= n)
        if (n % i == 0)
            return false;
        else
            i += 1;

    return true;
}

int main() {
    std::int64_t sum{};

    for (std::int64_t i{}; i < 2'000'000; ++i)
        if (is_prime(i))
            sum += i;

    std::cout << sum << std::endl;
}
