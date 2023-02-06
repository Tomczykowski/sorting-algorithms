#pragma once
#include <algorithm>

template <typename Iterator>
void quickSort(Iterator first, Iterator last)
{
    if (last <= first) return;
    Iterator pivot = first, middle = first + 1;
    for (Iterator i = first + 1; i < last; ++i) {
        if (*i < *pivot) {
            std::iter_swap(i, middle);
            ++middle;
        }
    }
    std::iter_swap(first, middle - 1);
    quickSort(first, middle - 1);
    quickSort(middle, last);
}