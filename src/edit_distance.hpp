#include <vector>
using namespace std;

template <typename T>
int min(const T& x, const T& y, const T& z)
{
    return min(min(x, y), z); 
}

template <typename T>
int edit_distance(const T& lhs, const T& rhs)
{
    int m = lhs.size() + 1;
    int n = rhs.size() + 1; 
    vector<int> dp(m * n, 0);

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int p = i * n + j;
            if (i == 0)
                dp[p] = j;
            else if (j == 0)
                dp[p] = i;
            else if (lhs[i - 1] == rhs[j - 1])
                dp[p] = dp[(i - 1) * n + j - 1];
            else
                dp[p] = 1 + min(dp[i * n + j - 1], dp[(i - 1) * n + j], dp[(i - 1) * n + j - 1]);
        }
    }

    return dp[m * n - 1];
} 
