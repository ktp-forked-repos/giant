#include <memory>
using namespace std;

template <typename T>
struct node
{
    T data;
    shared_ptr<node<T>> next;
};

template <typename T>
shared_ptr<node<T>> has_cycle(const shared_ptr<node<T>>& head)
{
    auto fast = head;
    auto slow = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            int len = 0;
            do
            {
                ++len;
                fast = fast->next;
            }
            while (slow != fast);
            auto pos = head;
            while (len--)
                pos = pos->next;
            auto start = head;
            while (start != pos)
            {
                pos = pos->next;
                start = start->next;
            }
            return start;
        }
    }
    return nullptr;
}
