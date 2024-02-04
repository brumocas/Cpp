//
// Created by bruco on 11/10/2023.
//

#include <iostream>
#include "ElectricCar.h"

ElectricCar::ElectricCar(std::string brand, std::string model, std::string owner, std::string type_motor)
        : car(brand, model, owner), type_motor(std::move(type_motor)) {
    // Additional initialization if needed
}

void ElectricCar::print() {
    car::print();
    std::cout << "Type of motor:" + type_motor << std::endl;
}

