template <typename T>
struct node
{
    T key;
    node* p;
    node* left;
    node* right;
    rb_color color;
    size_t size;
};
