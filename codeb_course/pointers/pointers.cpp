#include <iostream>
using namespace std;



int main()
{

    int n = 5;

    // physical address of the variable
    cout << &n << endl;

    // create a pointer to hold the n variable
    int *ptr = &n; 
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10; 
    cout << n << endl;
    cout << *ptr << endl << endl;

    int v;
    int *ptr2;
    ptr2 = &v;
    *ptr2 = 7;

    cout << v << endl;
    cout << *ptr2 << endl;

    return 0; 

}