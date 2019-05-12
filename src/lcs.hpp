#include <tuple>
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
using matrix = vector<vector<T>>;

template <typename T>
tuple<matrix<T>, matrix<T>> lcs_length(const string& x, const string& y)
{
    auto m = x.size();
    auto n = y.size();
    matrix<T> b(m, vector<T>{});
    matrix<T> c(m+1,, vector<T>{});
    for (auto i = 0; i != m; ++i)
    {
         b[i].assign(n, 0);
         c[i].assign(n+1, 0);
    }
    c[m].assign(n+1, 0);

    for (int i = 1; i <= m; ++i)
    {
         for (j = 1; j <= n; ++j)
         {
              int p = i-1;
              int q = j-1;
              if (x[p] == y[p])
              {
                  c[i][j] = c[p][q] + 1;
                  b[p][q] = '\\';
              }
              else if (c[p][j] >= c[i][q])
              {
                  c[i][j] = c[p][j];
                  b[p][q] = '|';
              }
              else
              {
                  c[i][j] = c[i][q];
                  b[p][q] = '-';
              }
         }
    }
    return { c, b };
}

template <typename >
void print_lcs(matrix<T>& b, const string& x, int i, int j)
{
    if (i == -1 or j == -1)
        return;
    if (b[i][j] == '\\')
    {
        print_lcs(b, x, i-1, j-1);
        cout << x[i];
    }
    else if (b[i][j] == '|')
        print_lcs(b, x, i-1, j);
    else
        print_lcs(b, x, i, j-1);
}
