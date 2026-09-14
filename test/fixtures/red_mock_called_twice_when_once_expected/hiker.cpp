// The logger is called twice where hiker.tests.cpp expects exactly one call,
// so the second call is over the saturated expectation and GoogleMock reports
// it.
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
    logger.log("Hiker::answer()");
    return 6 * 7;
}
