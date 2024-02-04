#include <iostream>
#include <cstdlib>
using namespace std;

void showMenu()
{
    cout << "*********Menu*********\n";
    cout << "1. Check balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "*********Menu*********\n";
}

int main()
{
    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do
    {
        showMenu();
        cout <<"Option: ";
        cin >> option;
        //system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is " << balance << " $\n"; 
            break;
        case 2:
            double depositAmount;
            cout << "Deposit amout:";
            cin >> depositAmount;
            balance += depositAmount;
            cout << "Balance is " << balance << " $\n"; 
            break;
        case 3:
            double withdrawAmount;
            cout << "Withdraw amout:";
            cin >> withdrawAmount;
            if(withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
                cout << "Balance is " << balance << " $\n"; 
            }
            else
            {
                cout << "Not enough money\n";
            }
            break;
        case 4:
            break;

        default:
            cout << "Invalid option\n";
            break;
        }

    }while (option!=4);
    

}