#include <stack>
#include <memory>
#include <vector>
using namespace std;

template <typename T>
struct node
{
    T data;
    unique_ptr<node<T>> left;
    unique_ptr<node<T>> right;
};

template <typename T>
vector<T> preorder(const unique_ptr<node<T>>& tree)
{
    stack<node<T>*> s;
    s.emplace(tree.get());
    vector<T> result;

    while (!s.empty())
    {
        auto curr = s.top();
        s.pop();
        if (curr)
        {
            result.emplace_back(curr->data);
            s.emplace(curr->right.get());
            s.emplace(curr->left.get());
        }
    }
    return result;
}
