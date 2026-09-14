#include "hiker.hpp"
#include "disk_logger.hpp"
#include "checksum.hpp"

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
    return checksum(6 * 7);
}
