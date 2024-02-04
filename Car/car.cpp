//
// Created by bruco on 11/10/2023.
//

#include "car.h"
#include <utility>
#include <iostream>


car::car() {
    // Default constructor
}

car::car(std::string brand, std::string model, std::string owner){
    this->brand = std::move(brand);
    this->model = std::move(model);
    this->owner = std::move(owner);
}

std::string car::getBrand() {
    return this->brand;
}

std::string car::getModel() {
    return this->brand;
}

std::string car::getOwner() {
    return this->owner;
}

void car::print() {
    std::cout << "-----------------Car information--------------------"<< std::endl;
    std::cout << "Model:" + brand << std::endl;
    std::cout << "Brand:" + model << std::endl;
    std::cout << "Owner:" + owner << std::endl;
}


