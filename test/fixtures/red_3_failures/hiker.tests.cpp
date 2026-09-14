#include "hiker.hpp"
#include "mock_logger.hpp"
#include <gmock/gmock.h>
#include <string>

using namespace ::testing;

namespace {

TEST(Hiker, Life_the_universe_and_everything)
{
    MockLogger logger;
    EXPECT_CALL(logger, log("Hiker::answer()")).Times(Exactly(1));
    Hiker arthur(logger);
    ASSERT_THAT(arthur.answer(), Eq(42));
}

TEST(Hiker, The_answer_is_three_digits_long)
{
    MockLogger logger;
    EXPECT_CALL(logger, log("Hiker::answer()")).Times(Exactly(1));
    Hiker arthur(logger);
    ASSERT_THAT(std::to_string(arthur.answer()).size(), Eq(3u));
}

TEST(Hiker, The_answer_is_odd)
{
    MockLogger logger;
    EXPECT_CALL(logger, log("Hiker::answer()")).Times(Exactly(1));
    Hiker arthur(logger);
    ASSERT_THAT(arthur.answer() % 2, Eq(1));
}

}
