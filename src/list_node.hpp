#include <memory>
using namespace std;

template <typename T>
struct list;

template <typename T>
using list_t = shared_ptr<list<T>>;

template <typename T>
struct list
{
    T data;
    list_t<T> next;
};
