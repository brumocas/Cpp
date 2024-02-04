#include <iostream>
#include <list>
#include <string>
using namespace std;

class person{
public:
    string name;
    string gender;
    int age;
    float height;
    float weight;
    list<string> friends;
};

void print_person(person p)
{
    cout << "name: " << p.name << endl; 
    cout << "gender: " << p.gender << endl; 
    cout << "age: " << p.age << endl;
    cout << "height: " << p.height << endl;  
    cout << "weight: " << p.weight << endl; 
    cout << "friends: " << endl;
    for(string f : p.friends)
    {
        cout << f << endl; 
    }
    cout << endl;

}


int main()
{
    person a;
    a.name = "Bruno";
    a.gender = "Male";
    a.age = 20;
    a.height = 1.80;
    a.weight = 75;
    a.friends = {"Ruben", "Ines", "Pedro", "Alex"};

    person b;
    b.name = "Alex";
    b.gender = "Male";
    b.age = 18;
    b.height = 1.69;
    b.weight = 54;
    b.friends = {"Ruben", "Ines", "Pedro", "Bruno"};

    print_person(a);
    print_person(b);

}