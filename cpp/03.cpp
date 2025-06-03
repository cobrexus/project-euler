#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    long n{600'851'475'143};
    int i{2};
    std::vector<long> factors{};

    while (i * i <= n) {
        if (n % i == 0) {
            n /= i;
            factors.push_back(i);
        } else
            ++i;
    }

    if (n > 1)
        factors.push_back(n);

    std::cout << *std::max_element(factors.begin(), factors.end()) << std::endl;
}
