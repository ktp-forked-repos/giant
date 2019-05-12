#include <vector>
using namespace std;

template <typename T>
void insertion_sort(vector<T>& A)
{
    for (int i = 1; i < A.size(); ++i)
    {
         auto& key = A[i];
         int j = i - 1;
         while (j > -1 && A[j] > key)
         {
                A[j+1] = A[j];
                --j;
         }
         A[j+1] = key;
    }
}
