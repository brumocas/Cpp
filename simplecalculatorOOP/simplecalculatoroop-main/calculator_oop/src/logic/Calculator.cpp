// Calculator.cpp
#include "../../include/logic/Calculator.h"

namespace logic {

    Calculator::Calculator() {
        result_ = 0;  // initialise the variable in the constructor
    }

    Calculator::~Calculator() {
        // If there were any dynamically allocated resources, you would release them here.
        // For example, if you allocated memory with new, you would delete it here.
    }

    int Calculator::add(int num1, int num2) {
        result_ = num1 + num2;
        return result_;
    }

    int Calculator::subtract(int num1, int num2) {
        result_ = num1 - num2;
        return result_;
    }

    int Calculator::multiply(int num1, int num2) {
        result_ = num1 * num2;
        return result_;
    }

    int Calculator::divide(int num1, int num2) {
        if (num2 != 0) {
            result_ = num1 / num2;
        } else {
            // Handle division by zero error.
            result_ = 0; // You can choose an appropriate error value or throw an exception.
        }
        return result_;
    }

    int Calculator::getResult() const {
        return result_;
    }

} // logic