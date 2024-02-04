    //
    // Created by bruco on 11/10/2023.
    //

    #ifndef CPP_ELECTRICCAR_H
    #define CPP_ELECTRICCAR_H


    #include <utility>

    #include "car.h"

    class ElectricCar: public car {
    private:
        std::string type_motor;
    public:
        ElectricCar(std::string brand, std::string model, std::string owner, std::string type_motor);
        void print() override;
    };

    #endif //CPP_ELECTRICCAR_H
