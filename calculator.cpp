#include "calculator.h"
#include <stdexcept>

int Calculator::add(int a, int b) {
    // TODO
    return a+b;
}

int Calculator::sub(int a, int b) {
    // TODO
    return a-b;
}

int Calculator::mul(int a, int b) {
    long long result = (long long)a * (long long)b;
    
    if (result > INT_MAX || result < INT_MIN)
    {
        throw std::overflow_error("Multiplication out of range");
    }
    return static_cast<int>(result);
}

int Calculator::div(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}