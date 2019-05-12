#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void bubble_sort(vector<T>& A)
{
    for (int i = 0; i < A.size() - 1; ++i)
         for (int j = A.size() - 1; j > i; --j)
              if (A[j] < A[j-1])
                  swap(A[j], A[j-1]);
}
