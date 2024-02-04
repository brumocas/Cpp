#include <iostream>
using namespace std;

int main()
{
    int intMax = INT32_MAX;
    cout << intMax << endl; // with no overflow
    cout << intMax + 1 << endl; // with overflow

}