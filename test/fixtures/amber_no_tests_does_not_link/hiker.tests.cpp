// A test file a learner has started but not yet put a TEST into. Nothing then
// references the googletest runtime, so the linker drops libgtest and libgmock
// before it reaches libgmock_main, which needs them, and the build fails. The
// makefile lists the libraries in an order that only works while some object
// file already pulls those symbols in.
#include "hiker.hpp"
#include "mock_logger.hpp"
#include <gmock/gmock.h>

using namespace ::testing;
