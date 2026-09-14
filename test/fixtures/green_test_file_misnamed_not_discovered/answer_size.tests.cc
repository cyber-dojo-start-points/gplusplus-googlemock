// A .cc file is valid C++ that the makefile never globs, so this test is
// shipped, compiled by nothing, and never runs. The count of 0 for AnswerSize
// in expected.json is what says so.
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
