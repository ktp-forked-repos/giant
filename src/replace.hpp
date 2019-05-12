#include <string>
using namespace std;

inline string replace(string& src, const string& dst, const string& rep)
{
    size_t pos = 0;
    while ((pos = src.find(dst, pos)) != string::npos)
    {
          src.replace(pos, dst.length(), rep);
          pos += rep.length();
    }
    return src;
}
