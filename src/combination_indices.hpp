#include <algorithm>

template <typename Iterator, typename T>
bool combination_indices(Iterator first, Iterator last, T first_value, T last_value, bool ASC)
{
    if (first == last)
        return false;

    if (*first == first_value && !ASC || *first + std::distance(first, last) == last_value && ASC)
        return false;

    for (auto it = first; it != last; ++it)
         *it += 2 * ASC - 1;
    
    return true;
}

template <typename Iterator, typename T>
bool next_combination_indices(Iterator first, Iterator last, T first_value, T last_value)
{
    return combination_indices(first, last, first_value, last_value, true);
}

template <typename Iterator, typename T>
bool prev_combination_indices(Iterator first, Iterator last, T first_value, T last_value)
{
    return combination_indices(first, last, first_value, last_value, false);
}
