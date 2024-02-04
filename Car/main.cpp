#include <iostream>
#include <utility>
#include "car.h"
#include "ElectricCar.h"


class Person {
private:
    std::string name;
    std::string company;
    int age;

public:
    Person(){
        // Do nothing
    }

    Person(std::string name, std::string company, int age){
        this->name = std::move(name);
        this->company = std::move(company);
        this->age = age;
    }

    void Print(){
        std::cout << "Name : " << name << std::endl;
        std::cout << "Company : " << company << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    void setName(std::string name){
        this->name = std::move(name);
    }

    std::string getName(){
        return this->name;
    }

    void setCompany(std::string company){
        this->company = std::move(company);
    }

    std::string getCompany(){
        return this->company;
    };

    void setAge(int age){
        this->age = age;
    }

    int getAge(){
        return this->age;
    }
};


int main() {

    Person me;
    me.setName("Bruno");
    me.setCompany("FEUP");
    me.setAge(21);

    ElectricCar dragon("Tesla", "Model y", me.getName(), "Induction Motor");
    dragon.print();


    return 0;
}
