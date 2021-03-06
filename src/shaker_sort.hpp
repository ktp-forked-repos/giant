#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void shaker_sort(vector<T>& A) 
{ 
    bool swapped = true; 
    int start = 0; 
    int end = A.size() - 1; 
  
    while (swapped)
    { 
        swapped = false; 
  
        for (int i = start; i < end; ++i)
        { 
            if (A[i] > A[i + 1])
            { 
                swap(A[i], A[i + 1]); 
                swapped = true; 
            } 
        } 
  
        if (!swapped) 
            break; 
  
        swapped = false; 
        --end; 
  
        for (int i = end - 1; i >= start; --i)
        { 
            if (A[i] > A[i + 1])
            { 
                swap(A[i], A[i + 1]); 
                swapped = true; 
            } 
        } 
        ++start; 
    } 
} 
