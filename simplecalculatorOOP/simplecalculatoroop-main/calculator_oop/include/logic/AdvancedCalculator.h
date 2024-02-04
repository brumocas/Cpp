#pragma once

#include "Calculator.h"

namespace logic {

    class AdvancedCalculator : public Calculator{
    public:
        AdvancedCalculator();

        float div(float num1, float num2);
        float getDivResult();

    private:
        float result_float_;
    };

} // logic

