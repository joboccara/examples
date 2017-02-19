#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

template <typename ForwardIterator, typename OutputIterator>
OutputIterator merge_adjacent(ForwardIterator first, ForwardIterator last, OutputIterator results)
{
    ForwardIterator beginUnique = first;
    while (beginUnique != last)
    {     
      // output all unique elements; stop when finding indentical adjacent ones
      ForwardIterator endUnique = std::adjacent_find(beginUnique, last);
      std::copy(beginUnique, endUnique, results);
    
      // identify the range of identical adjacent elements
      ForwardIterator beginIdentical = endUnique;
      ForwardIterator endIdentical = std::find_if(beginIdentical, last, [beginIdentical](const auto& element) {return element != *beginIdentical;});
    
      // aggregate identical flows into one
      if (beginIdentical != endIdentical)
      {
         *results = std::accumulate(beginIdentical, endIdentical, typename ForwardIterator::value_type());
         ++results;
      }
      beginUnique = endIdentical;
    }
    return results;
}

int main()
{
    std::vector<int> v = { 1, 1, 1, 4, 3, 3, 10, -5 };
    std::vector<int> results;

    merge_adjacent(v.begin(), v.end(), std::back_inserter(results));

    std::copy(results.begin(), results.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';

    return 0;
}

