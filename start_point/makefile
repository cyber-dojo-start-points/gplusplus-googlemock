CXXFLAGS += -I.
CXXFLAGS += -std=c++2a
CXXFLAGS += -Wpedantic -Wall -Wextra
CXXFLAGS += -fprofile-arcs -ftest-coverage

GTEST_LIBS = -lgtest -lgmock -lgmock_main -pthread

HPP_FILES = $(wildcard *.hpp)
COMPILED_HPP_FILES = $(patsubst %.hpp,%.compiled_hpp,$(HPP_FILES))
CPP_FILES = $(wildcard *.cpp)

.PHONY: test.output
test.output: test makefile
	@./$< --gtest_shuffle

test: $(CPP_FILES) $(COMPILED_HPP_FILES)
	@$(CXX) $(CXXFLAGS) -O $(CPP_FILES) $(GTEST_LIBS) -o $@

# This rule ensures header files build in their own right.
# The quality of header files is important because header files
# are #included from other files and thus have a large span
# of influence (unlike .cpp files which are not #included)

%.compiled_hpp: %.hpp
	@$(CXX) -x c++ $(CXXFLAGS) -c -o $@ $<
