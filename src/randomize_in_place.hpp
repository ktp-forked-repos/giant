#include <vector>
#include <random>
#include <algorithm>
using namespace std;

random_device rand;

template <typename T>
int randomize_in_place(vector<T>& A)
{
    int n = A.size();
    for (int i = 0; i != n; ++i)
    {
         int k = rand() % (n - i) + i;
         swap(A[i], A[k]);
    }
}
