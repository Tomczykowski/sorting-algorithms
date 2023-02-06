#pragma once
#include <algorithm>
#include "iostream"
#include "algorithm"

using namespace std;
template <typename Iterator>
void bubbleSort(Iterator first, Iterator last)
{
    for (Iterator i = first; i != last; ++i)
    {
        for (Iterator j = first; j < i; ++j)
        {
            if (*i < *j)
            {
                swap(*i, *j);
            }
        }
    }
}