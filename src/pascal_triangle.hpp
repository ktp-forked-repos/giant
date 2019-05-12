#include <vector>
using namespace std;

template <typename T>
vector<vector<T>> pascal_triangle(int row)
{
    vector<vector<T>> triangle;
    for (int i = 0; i < row; ++i)
    {
         vector<T> curr;
         for (int j = 0; j <= i; ++j)
              curr.emplace_back(0 < j && j < i ? triangle.back()[j-1] + triangle.back()[j] : T());
         triangle.emplace_back(curr);
    }
    return triangle;
}
