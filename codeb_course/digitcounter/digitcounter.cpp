#include <iostream>
using namespace std;

int main()
{
    //Count digits of a number
    int number;
    cout << "**Digit Counter**\nNumber:";
    cin >> number;

    if (number==0)
    {
        cout << "You have entered 0.\n";
    }
    else
    {
        int counter = 0;

        //when the number its negative
        if(number < 0)
        number = -1*number;

        while (number>0)
        {
            //number = number/10;
            number /=10;
            counter++;
        }
        cout << "The number has " << counter << " digits\n"; 
    }
}