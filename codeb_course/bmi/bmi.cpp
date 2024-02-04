#include <iostream>
using namespace std;

int main()
{   

    //BMI calculator
    //weight(kg) / height * height(m)
    //Underweight < 18.5
    //Normal Weight 18.5 - 24.9
    //Overwight > 25

    float weight, height, bmi;
    cout << "Weight(Kg),Height(m):";
    cin >> weight >> height;
    bmi = weight/(height*height);

    if (bmi < 18.5)
    {
        cout << "Underweight \n";
    }
    else if (bmi > 25)
    {
        cout << "Overweight \n";
    }
    else
    {
        cout << "Normal Weight \n";
    }
    
    cout << "BMI:" << bmi << endl;
    

}