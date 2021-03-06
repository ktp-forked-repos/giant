#include <merge_linked_list.hpp>

template <typename T>
list_t<T> sort_linked_list(list_t<T>& l)
{
    if (l == nullptr || l->next == nullptr)
        return l;
    list_t<T> prev = nullptr;
    list_t<T> slow = l;
    list_t<T> fast = l;
    while (fast && fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = nullptr;
    auto left = sort_linked_list(l);
    auto right = sort_linked_list(slow);
    return merge_linked_list(left, right);
}
