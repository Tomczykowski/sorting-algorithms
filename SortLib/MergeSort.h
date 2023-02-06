#pragma once
#include <algorithm>

template <typename Iterator>
void mergeSort(Iterator first, Iterator last)
{
    if (last <= first + 1) return;
    Iterator middle = first + (last - first) / 2;
    mergeSort(first, middle);
    mergeSort(middle, last);
    std::inplace_merge(first, middle, last);
}