#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "**Bruno Calculator**\n";
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':
        cout << num1 << operation << num2 << "=" << num1 - num2 << endl;
        break;
    case '+':
        cout << num1 << operation << num2 << "=" << num1 + num2 << endl;
        break;
    case '/':
        cout << num1 << operation << num2 << "=" << num1 / num2 << endl;
        break;
    case '*':
        cout << num1 << operation << num2 << "=" << num1 * num2 << endl;
        break;
    case '%':
        bool isNum1int , isNum2int;

        if(int(num1)==num1)
        isNum1int = true;

        if(int(num2)==num2)
        isNum2int = true;

        if(isNum1int == true && isNum2int == true)
        {
        cout << num1 << operation << num2 << "=" << int(num1) % int(num2) << endl;
        }
        else
        {
            cout << "Enter integer values for % operations\n";
        }
        break;

    default:
        cout << "Not valid operation!\n";
        break;
    }

}