#include <iostream>
using namespace std;


bool isPrimeNumber(int number)
{   
    for (int i = 2; i < number; i++)
    {
        if(number%i == 0)
            return false;
    }
    return true;
}

int main()
{   
    /*
    int number;
    cout << "Number:";
    cin >> number;

    bool value = isPrimeNumber(number);
    if(value == true)
    {
        cout << "The number is prime\n";
    }
    else
    {
        cout << "The number is not prime\n";
    }
    */

    //All Prime numbers between 1-1000
    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            cout << i << " ";
            count ++;
        }   
    }

    cout << "\nExists " << count << " prime numbers\n";
}


