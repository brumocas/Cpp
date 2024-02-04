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

    //constructers
    person(string Name, string Gender, int Age, float Height, float Weight)
    {
        name = Name;
        gender = Gender;
        age = Age;
        height = Height;
        weight = Weight;
        
    }

    //
    void get_info()
    {
        cout << "name: " << name << endl; 
        cout << "gender: " << gender << endl; 
        cout << "age: " << age << endl;
        cout << "height: " << height << endl;  
        cout << "weight: " << weight << endl; 
        cout << "friends: " << endl;
        for(string f : friends)
        {
            cout << f << endl; 
        }
        cout << endl;
    }
};


int main()
{
    person a("Bruno","Male",20,1.80,75);
    a.friends = {"Ruben", "Ines", "Pedro", "Alex"};
    a.friends.push_back("Alberto");

    person b("Alex","Male",18,1.69,54);
    b.friends = {"Ruben", "Ines", "Pedro", "Bruno"};

    a.get_info();
    b.get_info();

}