#ifndef FIZZ_BUZZ_INCLUDED
#define FIZZ_BUZZ_INCLUDED

class Logger;

class FizzBuzz
{
public:
    FizzBuzz();
    explicit FizzBuzz(Logger &);
    int answer();
private:
    Logger & logger;
};

#endif
