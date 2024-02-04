//
// Created by bruco on 11/10/2023.
//

#ifndef CPP_CAR_H
#define CPP_CAR_H


#include <string>

class car {
private:

    std::string brand;
    std::string model;
    std::string owner;

public:
    car();
    car(std::string brand, std::string model, std::string owner);
    std::string getBrand();
    std::string getModel();
    std::string getOwner();
    virtual void print();
};

#endif //CPP_CAR_H
