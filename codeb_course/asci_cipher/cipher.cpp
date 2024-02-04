#include <iostream>
#include <fstream>
using namespace std;

/* Cipher example for 5 char */

int main()
{
    char c1, c2, c3, c4, c5;
    cout << "ENTER 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message:" << " " <<int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

    ofstream file("cipher.txt");
    if (file.is_open())
    {
        file << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;
        file.close();
        cout << "Cipher created successfully.\n";
    }
    else
    {
        cout << "Unable to open the file.\n";
    }
    

    return 0;   
}

