#include <partition.hpp>

template <typename T>
T select(vector<T>& A, int p, int r, int i)
{
    if (p == r)
        return A[p];
    int q = partition(A, p, r);
    int k = q - p + 1;
    if (i == k)
        return A[q];
    if (i < k)
        return select(A, p, q - 1, i);
    return select(A, q + 1, r, i - k);
}
