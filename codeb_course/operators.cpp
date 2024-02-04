#include <iostream>
using namespace std;


int main()
{
    //+,-,*,/,%
    
    cout << 5 + 2 << endl;
    cout << 5 / 2 << endl; 
    cout << 5 % 2 << endl;      
    cout << endl;

    //++,--
    int counter = 7;
    cout << counter++ << endl;  //prints the number and then increments
    cout << ++counter << endl;  //increments and then prints the number
    cout << --counter << endl;  //decrements and then prints the number
    cout << counter-- << endl;  //prints the number and then decrements
    cout << endl;

    //<,>,<=,>=,==,!=
    int a = 5 , b = 5;
    cout << (a!=b) << endl;
    cout << (a==b) << endl;
    cout << endl;

    //&&,||,!
    cout << (a==5 && b==5) << endl; //and statement
    cout << (a==5 || b==5) << endl; //or statement
    cout << endl;

    //=,+=,-=,*=,/=,%=
    int x = 5;
    x+=7;
    cout << x << endl; //same as --> x = x + 7
    //cout << endl;
    
}   
