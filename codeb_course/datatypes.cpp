#include <iostream>
using namespace std;

int main()
{
    int yearofbirth = 2002; // year of  birth
    char gender = 'm'; // male or female
    bool adult = true; // older than 18
    float average_height = 179.5; // height in cm
    double balance = 1310238103811312; // balance in bank account

    // space used in memmory
    cout << "Size of int is " << sizeof(int) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";
    
    // possible to check values if jump into the stdint.h library
    cout << "Int min value is " << INT32_MIN << endl; 
    cout << "Int max value is " << INT32_MAX << endl;


}