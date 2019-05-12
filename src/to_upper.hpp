#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

inline string to_upper(const string& s)
{
    string upper(s);
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    return upper;
}
