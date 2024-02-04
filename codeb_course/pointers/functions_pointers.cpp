#include <iostream>
using namespace std;

int getMin(int numbers[], int size)
{
    int min = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if(min > numbers[i])
        min = numbers[i];
    }
    
    return min;
}



int getMax(int numbers[], int size)
{
    int max = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if(max < numbers[i])
        max = numbers[i];
    }
    
    return max;
}

void getMinAndMax(int numbers[], int size, int* min, int* max)
{
    
    for (int i = 0; i < size; i++)
    {
        if(numbers[i] > *max)
        *max = numbers[i];

        if(numbers[i] < *min)
        *min = numbers[i];
    }
    
}


int main()
{
    int numbers[5] = {10, 22, 32, 124, 25};

    //cout << getMin(numbers, 5) << endl;
    //cout << getMax(numbers, 5) << endl;

    int min, max;
    min = numbers[0];
    max = numbers[0];

    getMinAndMax(numbers, 5, &min, &max);

    cout << min << " " << max << endl; 

    return 0;
}