#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    const int sum {std::accumulate(std::begin(v), std::end(v), 0)};

    std::cout << sum << '\n';
}
