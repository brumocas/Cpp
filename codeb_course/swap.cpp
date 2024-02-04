#include <iostream>
using namespace std;

/*
void Swap(int& a,int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}*/

/*
void Swap(char& a,char& b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}*/

//generics to avoid different datatypes for same function
// make templates
// typename == class, both can be used
template<class T>
void Swap(T& a,T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{   
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap(a, b);
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap(c, d);
    cout << c << " - " << d << endl;

    float e = 19.8,f = 19.9;
    cout << e << " - " << f << endl;
    Swap(e, f);
    cout << e << " - " << f << endl;

    return 0;
}