#include <iostream>
using namespace std;


void  printNumber(int* numberPtr)
{
    cout << *numberPtr << endl;
}

void  printLetter(char* charPtr)
{
    cout << *charPtr << endl;
}

// void pointers example
void print(void*ptr,char type)
{

    switch (type)
    {
    case 'i':
        //handle int pointer
        cout << *((int*)ptr) << endl;
        break;
    case 'c':
        //handle char pointer
        cout << *((char*)ptr) << endl;
        break; 
    case 'f':
        //handle float pointer
        cout << *((float*)ptr) << endl;
        break;   
    
    default:
        cout << "Invalid type\n";
        break;
    }
}

int main()
{
    // void pointer holds the address of any other datatype {int,float,char...}

    int number = 5;
    //printNumber(&number); //pass the address of the number

    char letter = 'a';
    //printLetter(&letter);

    float numberf = 1.80;

    print(&number,'i');
    print(&letter,'c');
    print(&numberf,'f');

    return 0;
}