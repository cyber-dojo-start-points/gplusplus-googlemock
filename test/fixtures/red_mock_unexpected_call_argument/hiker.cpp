// The logger is called with a string the EXPECT_CALL in hiker.tests.cpp does
// not match, so GoogleMock reports an unexpected call as well as an
// unsatisfied expectation.
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
    logger.log("Hiker::the_answer()");
    return 6 * 7;
}
