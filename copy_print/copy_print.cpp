#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
    std::vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::copy(std::begin(v), std::end(v), std::ostream_iterator<int>{std::cout, "\n"});
}
