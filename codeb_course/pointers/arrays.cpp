#include <iostream>
using namespace std;


int main()
{
    int array[5] = { 1,2,3,4,5 };
    
    // name of the array is the address of the first element
    cout << array << endl;
    cout << &array[0] << endl;

    // same aproach
    cout << array[2] << endl;
    cout << *(array + 2) << endl << endl;

    // fill array
    int array2[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Number:";
        cin >> array2[i];
    }
    
    // print array
    for (int i = 0; i < 5; i++)
    {
        //cout << array2[i] << endl;
        cout << *(array2 + i)  << endl;
    }
     
    return 0;
}