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
vector<T> inorder(const unique_ptr<node<T>>& tree)
{
    stack<const node<T>*> s;
    const auto* curr = tree.get();
    vector<T> result;

    while (!s.empty() || curr)
    {
        if (curr)
        {
            s.push(curr);
            curr = curr->left.get();
        }
        else
        {
            curr = s.top();
            s.pop();
            result.emplace_back(curr->data);
            curr = curr->right.get();
        }
    }
    return result;
}
