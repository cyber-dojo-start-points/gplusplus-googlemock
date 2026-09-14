// answer() never returns, so the run reaches max_seconds and is killed. The
// counter is volatile so the loop survives being compiled.
#include "hiker.hpp"
#include "disk_logger.hpp"

Hiker::Hiker()
    : logger(DiskLogger::getInstance())
{
}


Hiker::Hiker(Logger & logger)
    : logger(logger)
{
}

int Hiker::answer()
{
    logger.log("Hiker::answer()");
    volatile int spin = 0;
    while (spin == 0)
    {
    }
    return 6 * 7;
}
