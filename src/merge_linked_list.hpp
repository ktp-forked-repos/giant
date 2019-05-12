#include <list_node.hpp>

template <typename T>
void append_node(list_t<T>& tail, list_t<T>& node)
{
    tail->next = node;
    tail = node;
    node = node->next;
}

template <typename T>
list_t<T> merge_linked_list(list_t<T>& lhs, list_t<T>& rhs)
{
    auto head = make_shared<list<T>>();
    auto tail = head;
    while (lhs && rhs)
           append_node(tail, lhs->data <= rhs->data ? lhs : rhs);
    tail->next = lhs ? lhs : rhs;
    return head->next;
}
