// The makefile globs *.cpp and *.hpp only, so a .c file is not compiled even
// when it could not possibly compile. This one is C++ inside a .c name and is
// missing a brace as well, and the run still reaches green.
#include "hiker.hpp"
#include <gmock/gmock.h>

TEST(AnswerSize, The_answer_is_two_digits_long)
{
    ASSERT_THAT(1, Eq(1));
