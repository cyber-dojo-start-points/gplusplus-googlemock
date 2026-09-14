// answer() returns what the test asks for but never calls the logger, so the
// EXPECT_CALL in hiker.tests.cpp goes unsatisfied. GoogleMock reports that at
// the end of the test and the run is red even though the ASSERT_THAT passed.
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
    return 6 * 7;
}
