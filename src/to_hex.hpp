#include <string>

template <typename T>
inline std::string to_hex(const T& c)
{
    std::string dst;
    std::string hex = "0123456789ABCDEF";
    for (auto& v : c)
    {
       auto n = static_cast<uint8_t>(v);
       dst.append(1, hex[(n & 0xF0) >> 4]);
       dst.append(1, hex[n & 0x0F]);
       dst.append(1, ' ');
    }
    return dst;
}
