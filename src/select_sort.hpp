#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void select_sort(vector<T>& vec)
{
    for (int j = 0; j != vec.size() - 1; ++j)
    {
         int k = j;
         for (int i = j+1; i < vec.size(); ++i)
              if (vec[k] > vec[i])
                  k = i;
         swap(vec[k], vec[j]);
    }
}
