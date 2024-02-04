#include <iostream>
#include <list>
using namespace std;

class person{
private:
    string gender;
    int age;
    float height;
    float weight;
    list<string> friends;
    
//can be accessed in derived classes
protected:
    string name;

public:
    //constructer
    person(string Name, string Gender, int Age, float Height, float Weight)
    {
        name = Name;
        gender = Gender;
        age = Age;
        height = Height;
        weight = Weight;
        
    }

    // get person info
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
    
    // increase the age of the person
    void updateAge()
    {
        age++;
    }

    // add friend to the person
    void addFriend(string newFriend)
    {
        friends.push_back(newFriend);
    }

};

// inheritance example
class physicalAspects:public person {
public:
    physicalAspects(string Name, string Gender, int Age, float Height, float Weight):person(Name, Gender, Age, Height, Weight)
    {
        
    }
    
    void cuttingBeard()
    {
        cout << name <<"is cutting his beard right now\n";
    }
};

int main()
{   
    physicalAspects Bruno("Bruno", "Male", 20, 1.80, 75);

    // You can call the get_info() method to display Bruno's information
    Bruno.get_info();

    // You can also use other methods to update Bruno's age and add friends
    Bruno.updateAge();
    Bruno.addFriend("Ruben");
    Bruno.addFriend("Ines");
    Bruno.addFriend("Pedro");

    // Display Bruno's updated information after adding friends and increasing age
    Bruno.get_info();

    // can only be accessed by the inheritance
    Bruno.cuttingBeard();

}
