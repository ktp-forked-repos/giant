#include <vector>
using namespace std;

template <typename T>
vector<T> greedy_activity_selector(const vector<T>& s, const vector<T>& f, vector<T>& a)
{
   int n = s.size();
   vector<T> A;
   A.push_back(a[0]);
   int k = 0;
   for (int m = 1; m != n; ++m)
   {
        if (s[m] >= f[k])
        {
            A.push_back(a[m]);
            k = m;
        }
   }
   return A;
}
