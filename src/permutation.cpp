#include <iostream>
#include <iterator>
#include <permutation.hpp>

int main(int argc, char* argv[])
{
    int n = 4;
    std::vector<int> v { 1, 2, 3, 4};

    do
    {
        std::cout << "[ " << v[0];
        for (int j = 1; j < n; ++j)
             std::cout << ", " << v[j];
        std::cout << " ] " << std::endl;
    } while(next_partial_permutation(v, n));

    std::cout << std::endl;

    std::vector<int> k { 4, 3, 2, 1 };

    do
    {
        std::cout << "[ " << k[0];
        for (int j = 1; j < n; ++j)
             std::cout << ", " << k[j];
        std::cout << " ] " << std::endl;
    } while(prev_partial_permutation(k, n));

    return 0;
}
