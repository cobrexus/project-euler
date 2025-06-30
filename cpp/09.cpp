#include <iostream>

int main() {
    int result{};

    for (int i{1}; i < 998; ++i) {
        for (int j{1}; j < 998; ++j) {
            for (int k{1}; k < 998; ++k) {
                if (i + j + k == 1000 && (i * i) + (j * j) == k * k) {
                    result = i * j * k;
                    goto end;
                }
            }
        }
    }

end:
    std::cout << result << '\n';
}
