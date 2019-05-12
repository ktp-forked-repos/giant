#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void rearrange(vector<T>& A)
{
    for (size_t i = 0; i != A.size(); ++i)
         if ((!(i % 2) && A[i-1] < A[i]) || ((i % 2) && A[i-1] > A[i]))
             swap(A[i-1], A[i]);
}
