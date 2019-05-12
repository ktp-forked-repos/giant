#ifndef TO_BUFFER_HPP
#define TO_BUFFER_HPP

#include <vector>
#include <fstream>
#include <filesystem>

std::vector<char>& read_buffer(const std::string& file, std::vector<char>& buffer)
{
    std::ifstream ifs(file, std::ios::binary);
    ifs.read(buffer.data(), buffer.size());
    return buffer;
}

std::vector<char>& to_buffer(const std::string& file, std::vector<char>& buffer)
{
    buffer.resize(std::filesystem::file_size(file));
    return read_buffer(file, buffer);
}

std::vector<char> to_buffer(const std::string& file)
{
    std::vector<char> buffer(std::filesystem::file_size(file));
    return read_buffer(file, buffer);
}

template <typename T>
void to_binary(const std::string& file, T& buffer, size_t size)
{
    std::ofstream ofs(file, std::ios::binary | std::ios::trunc);
    ofs.write(buffer.data(), size);
}

template <typename T>
void to_binary(const std::string& file, T& buffer)
{
    std::ofstream ofs(file, std::ios::binary | std::ios::trunc);
    ofs.write(buffer.data(), buffer.size());
}

#endif
