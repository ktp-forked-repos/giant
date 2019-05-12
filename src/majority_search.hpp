#include <vector>
using namespace std;

template <typename T>
T majority_search(const vector<T>& v)
{
    int i = 0;
    int j = 0;
    for (int k = 0; k != v.size(); ++k)
    {
         if (i == 0)
         {
             i = 1;
             j = k;
         }
         else if (v[k] == v[j])
             ++i;
         else
             --i;
    }

    return v[j];
}
