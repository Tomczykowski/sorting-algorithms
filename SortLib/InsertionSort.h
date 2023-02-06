#pragma once

using namespace std;
template <typename Iterator>
void insertionSort(Iterator first, Iterator last)
{
    if(first == last) return;
    iter_swap(first, std::min_element(first, last));
    for (Iterator b = first; ++b < last; first = b)
    {
        for (Iterator c = b; *c < *first; --c, --first)
        {
            iter_swap(first, c);
        }
    }
}
