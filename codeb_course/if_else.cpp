#include <iostream>
using namespace std;


int main()
{   
    int number = 0;
    cout << "Enter an integer number \n";
    cin >> number;

    if(number % 2 == 0)
    {
        cout << "The number is even \n";
    }
    else
    {
        cout << "The number is odd \n";
    }

    return 0;
}