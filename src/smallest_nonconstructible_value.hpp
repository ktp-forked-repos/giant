#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
T smallest_nonconstructible_value(vector<T>& A)
{
    sort(A.begin(), A.end());
    T max_constructible_value = T();
    for (auto& a : A)
    {
         if (a > max_constructible_value + 1)
             break;
         max_constructible_value += a;
    }
    return max_constructible_value;
}
