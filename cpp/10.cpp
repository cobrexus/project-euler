#include <iostream>

bool is_prime(long n) {
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
    long sum{};

    for (long i{}; i < 2'000'000; ++i)
        if (is_prime(i))
            sum += i;

    std::cout << sum << std::endl;
}
