template <typename Iterator>
bool next_combination_counts(Iterator first, Iterator last)
{
    if (first == last)
        return false;

    Iterator current = last;
    while (current != first && *--current == 0);

    if (current == first)
    {
        if (*first != 0)
            std::iter_swap(first, --last);
        return false;
    }

    --*current;
    std::iter_swap(--last, current);
    ++(*--current);
    return true;
}

template <typename Iterator>
bool prev_combination_counts(Iterator first, Iterator last)
{
    if (first == last)
        return false;

    Iterator current = --last;
    while (current != first && *--current == 0);

    if (current == last || current == first && *current == 0)
    {
        if (first != last)
            std::iter_swap(first, last);
        return false;
    }

    --*current;
    ++current;
    if (*last != 0)
        std::iter_swap(current, last);
    ++*current;
    return true;
}
