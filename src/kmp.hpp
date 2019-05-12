#include <string>
#include <vector>
#include <iostream>
using namespace std;

template <typename X>
vector<int> compute_prefix_function(const X& P)
{
    int m = P.size();
    vector<int> pi(m, 0);

    int k = 0;
    for (int q = 1; q != m; ++q)
    {
         while (k > 0 && P[k] != P[q])
                k = pi[k];
         if (P[k] == P[q])
             ++k;
         pi[q] = k;
    }
    return pi;
}

template <typename X>
void kmp_matcher(const X& T, const X& P)
{
    int n = T.size();
    int m = P.size();
    auto pi = compute_prefix_function(P);

    int k = 0;
    for (int q = 0; q != n; ++q)
    {
         while (k > 0 && P[k] != T[q])
                k = pi[k];
         if (P[k] == T[q])
             ++k;
         if (k == m)
         {
             cout << q - m + 1 << endl;
             k = pi[k - 1];
         }
    }
}
