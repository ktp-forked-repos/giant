#include <vector>
using namespace std;

template <typename T>
bool matrix_search(const vector<vector<T>>& v, const T& x)
{
    int row = 0;
    int col = v[0].size() - 1;
    while (row < v.size() && col >= 0)
    {
        auto& k = v[row][col];
        if (k == x)
            return true;
        else if (k < x)
            ++row;
        else
            --col;
    }
    return false;
}
