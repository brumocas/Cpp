#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    ifstream file("cipher.txt");
    if (file.is_open())
    {   
        string line;
        vector<char> cipher;

        while (getline(file, line))
        {
            istringstream iss(line);
            string item;

            for (int i = 0; i < 5; i++)
            {
                getline(iss, item, ' ');
                cipher.push_back(char(stoi(item)));
            }
            
        }
        file.close();

        for (int i = 0; i < 5; i++)
        {
            cout << cipher[i];
        }
        cout << endl << "Cipher read successfully.\n";
    }
    else
    {
        cout << "Unable to open the file.\n";
    }
    
    return 0;   
}