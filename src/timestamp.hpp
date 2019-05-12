#include <ctime>
#include <string>

std::string timestamp()
{
    char date[80];
    timespec tp;
    clock_gettime(CLOCK_REALTIME, &tp);
    tm* timeinfo = localtime(static_cast<time_t*>(&tp.tv_sec));
    strftime(date, 80, "%Y-%m-%d-%H:%M:%S", timeinfo);
    return std::string(date);
}
