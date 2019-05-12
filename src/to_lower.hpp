#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

inline string to_lower(const string& s)
{
    string lower(s);
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    return lower;
}
