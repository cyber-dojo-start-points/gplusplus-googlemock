// The makefile globs *.cpp in the top directory only, so a test file put in
// a sub-directory is never compiled and never linked. The counts in
// expected.json are what say so: one test from one test suite, and the name
// AnswerSize nowhere in the output.
#include "hiker.hpp"
#include "mock_logger.hpp"
#include <gmock/gmock.h>
#include <string>

using namespace ::testing;

namespace {

TEST(AnswerSize, The_answer_is_two_digits_long)
{
    MockLogger logger;
    EXPECT_CALL(logger, log("Hiker::answer()")).Times(Exactly(1));
    Hiker arthur(logger);
    ASSERT_THAT(std::to_string(arthur.answer()).size(), Eq(2u));
}

}
