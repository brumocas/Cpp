#include <iostream>
#include "../include/logic/Calculator.h"
#include "../include/logic/AdvancedCalculator.h"
#include "../include/interaction/user.h"

int main() {

    interaction::user *first_number = new interaction::user();
    interaction::user *second_number = new interaction::user();

    logic::AdvancedCalculator *calculator = new logic::AdvancedCalculator();

    int num1 = first_number->GetUserInput();
    int num2 = second_number->GetUserInput();

    calculator->add(num1, num2);
    calculator->div(static_cast<float>(num1), static_cast<float>(num2));

    std::cout << "Result of adding up: " << calculator->getResult() << std::endl;
    std::cout << "Result of division: " << calculator->getDivResult() << std::endl;



    return 0;
}
