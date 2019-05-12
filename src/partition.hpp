#include <vector>
#include <random>
#include <algorithm>
using namespace std;

random_device rand;

template <typename T>
int partition(vector<T>& A, int p, int r)
{
    int n = r - 1;
    int k = rand() % (n - p + 1) + p;
    swap(A[k], A[n]);
    auto& x = A[n];
    int i = p - 1;
    for (int j = p; j != n; ++j)
         if (A[j] <= x)
             swap(A[++i], A[j]);
    swap(A[++i], A[n]);
    return i;
}
