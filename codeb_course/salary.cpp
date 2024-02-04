#include <iostream>
using namespace std;

int main()
{   
    float annualSalary = 0;
    cout << "Pls enter your annual salary :) \n";
    cin >> annualSalary;
    float monthSalary = annualSalary/12;
    cout << "Your monthly salary is " << monthSalary << "\n";
    cout << "Your annual salary is " << annualSalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10 << endl;

    //system("pause>0");
}