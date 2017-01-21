#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    auto to_square ([](int i) { return i * i; });

    transform(istream_iterator<int>{cin}, {},
              ostream_iterator<int>{cout, "\n"},
              to_square);
}
