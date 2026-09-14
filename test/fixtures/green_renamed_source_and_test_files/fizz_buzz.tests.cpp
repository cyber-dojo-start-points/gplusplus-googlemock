// Nothing in the build names hiker, so renaming every source and test file
// is enough on its own. The makefile globs whatever is there.
#include "fizz_buzz.hpp"
#include "mock_logger.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

namespace {

TEST(FizzBuzz, Life_the_universe_and_everything)
{
    MockLogger logger;
    EXPECT_CALL(logger, log("FizzBuzz::answer()")).Times(Exactly(1));
    FizzBuzz arthur(logger);
    ASSERT_THAT(arthur.answer(), Eq(42));
}

}
