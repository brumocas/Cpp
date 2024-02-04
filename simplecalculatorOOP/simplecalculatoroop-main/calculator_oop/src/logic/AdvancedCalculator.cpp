#include "../../include/logic/AdvancedCalculator.h"

namespace logic {

    AdvancedCalculator::AdvancedCalculator() {
        result_float_ = 0.0f;
    }

    float AdvancedCalculator::div(float num1, float num2) {
        if (num2 != 0.0f) {
            result_float_ = num1 / num2;
        } else {
            result_float_ = 0.0f;
        }
        return result_float_;
    }

    float AdvancedCalculator::getDivResult() {
        return result_float_;
    }

} // logic