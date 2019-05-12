#include <random>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void random_sampling(vector<T>& A, int k)
{
    default_random_engine seed(random_device()());
    for (int i = 0; i != k; ++i)
         swap(A[i], A[uniform_int_distribution<int>(i, static_cast<int>(A.size()) - 1)(seed)]);
}

