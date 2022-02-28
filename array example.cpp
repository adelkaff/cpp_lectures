#include <array>
#include <cstdio>

int main()
{
        std::array<int, 5> x = {2, 4, 6, 8, 10};
        std::array<int, 5> y = {1, 3, 5, 7, 9};
        for (int i = 0; i < x.size(); i += 1)
        {
                x[i] += y[i];
                printf("sum[%d] = %d\n", i, x[i]);
        }
}