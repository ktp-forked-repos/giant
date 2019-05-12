#include <node.hpp>

template <typename T>
node<T>* os_select(node<T>*& x, int i)
{
    int rank = x->left->size + 1;
    if (i == rank)
        return x;
    return i < rank ? os_select(x->left, i) : os_select(x->right, i - rank);
}

template <typename T>
int os_rank(node<T>*& root, node<T>*&x)
{
    int r = x->left->size + 1;
    node<T>* y = x;
    while (y != root)
    {
          if (y == y->parent->right)
              r += y->parent->left->size + 1;
          y = y->parent;
    }
    return r;
}
