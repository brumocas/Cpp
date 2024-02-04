#pragma once

namespace logic {
    class Calculator {
    public:
        // Define the constructor of the class
        Calculator();

        // Define the destructor of the class
        ~Calculator();

        // Methods for performing mathematical operations with integers.
        int add(int num1, int num2);

        int subtract(int num1, int num2);

        int multiply(int num1, int num2);

        int divide(int num1, int num2);

        int getResult() const;  //  method to get the value of the private var result.


    private:
        int result_; // Attribute - Private data member to store the result.
    };

}