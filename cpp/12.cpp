#include <iostream>

int triangle_num(int nth) { return (nth * (nth + 1)) / 2; }

int divisors(int n) {
    int ret{2};

    for (int i{2}; i <= n / 2; ++i)
        if (n % i == 0)
            ++ret;

    return ret;
}

int main() {
    for (int i{1};; ++i) {
        if (divisors(triangle_num(i)) > 500) {
            std::cout << triangle_num(i) << std::endl;
            goto end;
        }
    }

end:
    return 0;
}
