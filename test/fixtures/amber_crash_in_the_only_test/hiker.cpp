// answer() dereferences a null pointer, so the test binary dies part way
// through the run. googletest prints the [ RUN ] line for the test it was in
// and nothing after it, so there is no PASSED line and no FAILED line for the
// rag-lambda to read, and the run is amber rather than red.
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
    int * const nowhere = nullptr;
    return *nowhere;
}
