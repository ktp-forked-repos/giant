#include <list_node.hpp>

template <typename T>
list_t<T> reverse(list_t<T>& head)
{
    list_t<T> prev = nullptr;
    while (head)
    {
          auto next = head->next;
          head->next = prev;
          prev = head;
          head = next;
    }
    return prev;
}
