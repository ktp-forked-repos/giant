#include <string>
#include <algorithm>

inline reverse_words(string& s)
{
    reverse(s.begin(), s.end());
    size_t start = 0;
    while ((size_t end = s.find(" ", start)) != string::npos)
    {
           reverse(s.begin() + start, s.begin() + end);
           start = end + 1;
    }
    reverse(s.begin() + start, s.end());
}
