#include <iostream>
#include <list>
using namespace std;

class person{
private:
    string name;
    string gender;
    int age;
    float height;
    float weight;
    list<string> friends;

public:
    person(string Name, string Gender, int Age, float Height, float Weight)
    {
        name = Name;
        gender = Gender;
        age = Age;
        height = Height;
        weight = Weight;
        
    }

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
    
    void updateAge()
    {
        age++;
    }

    void addFriend(string newFriend)
    {
        friends.push_back(newFriend);
    }

};


int main()
{   

    person a("Bruno","Male",20,1.80,75);
    //a.friends = {"Ruben", "Ines", "Pedro", "Alex"};
    //a.friends.push_back("Alberto");
    a.updateAge();
    a.addFriend("Joana");

    a.get_info();

}