#include <partition.hpp>

template <typename T>
void quick_sort(vector<T>& A, int p, int r)
{
    if (p >= r)
        return;
    int q = partition(A, p, r);
    quick_sort(A, p, q);
    quick_sort(A, q + 1, r);
}
