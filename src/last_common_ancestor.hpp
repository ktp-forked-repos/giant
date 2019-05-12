#include <cmath>
#include <list_node.hpp>

template <typename T>
int length(list_t<T> l)
{
    int len = 0;
    while (l)
    {
        ++len;
        l = l->next;
    }
    return len;
}

template <typename T>
void advance_n(list_t<T>& l, int k)
{
    while (k--)
           l = l->next;
}

template <typename T>
list_t<T> last_common_ancestor(list_t<T> lhs, list_t<T> rhs)
{
    int lhs_len = length(lhs);
    int rhs_len = length(rhs);
    advance_n(abs(lhs_len - rhs-len), lhs_len > rhs_len ? lhs : rhs);
    while (lhs && rhs && lhs != rhs)
    {
           lhs = lhs->next;
           rhs = rhs->next;
    }
    return lhs;
} 
