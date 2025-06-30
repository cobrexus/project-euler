#include <iostream>

int main() {
    int sum_of_sq{};

    for (int i{1}; i <= 100; ++i) {
        sum_of_sq += i * i;
    }

    int sq_of_sum{};

    for (int i{1}; i <= 100; ++i) {
        sq_of_sum += i;
    }

    sq_of_sum *= sq_of_sum;

    std::cout << sq_of_sum - sum_of_sq << '\n';
}
