#include <vector>
#include <iostream>
#include <hypercube_indices.hpp>

int main(int argc, char* argv[])
{
    int r = 3;
    int n = 5;
    std::vector<int> v(r, 0);
    
    do
    {
        std::cout << "[ " << v[0];
        for (int j = 1; j < r; ++j)
             std::cout << ", " << v[j];
        std::cout << " ] " << std::endl;
    } while (next_hypercube_indices(v.begin(), v.end(),  0, n));

    std::cout << std::endl;

    std::vector<int> k{ 4, 4, 4 };
    
    do
    {
        std::cout << "[ " << k[0];
        for (int j = 1; j < r; ++j)
             std::cout << ", " << k[j];
        std::cout << " ] " << std::endl;
    } while (prev_hypercube_indices(k.begin(), k.end(),  0, n));

    return 0;
}
