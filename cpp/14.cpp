#include <iostream>

int main() {
    int max_len{};
    int ans{};

    for (int i{1}; i <= 1'000'000; ++i) {
        std::int64_t j{i};
        int chain_len{1};

        while (j != 1) {
            if (j % 2 == 0) {
                j /= 2;
                chain_len += 1;
            } else {
                j = 3 * j + 1;
                chain_len += 1;
            }
        }

        if (chain_len > max_len) {
            max_len = chain_len;
            ans = i;
        }
    }

    std::cout << ans << std::endl;
}
