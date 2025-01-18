#include <iostream>

int main()
{
    int a{1};
    int b{2};
    int c{0};

    while (b < 4'000'000)
    {
        if (b % 2 == 0)
        {
            c += b;
        }

        int temp{a};
        a = b;
        b += temp;
    }

    std::cout << c << '\n';
}
