// (1) Create a text file and write some data into it. Then, read every other 5 bytes of data from this file and display it onto the output screen.

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream myfile;
    string line;

    myfile.open("abid.txt", ios::out);
    cout << "Enter a string : ";
    getline(cin >> ws, line);
    myfile << line;
    myfile.close();

    myfile.open("abid.txt", ios::in | ios::binary | ios::ate);
    streampos end;
    end = myfile.tellg();
    myfile.seekg(0, ios::beg);
    char ch;

    while (myfile.good())
    {
        if (myfile.tellg() <= end)
        {
            for (int i = 0; i < 5; i++)
            {
                myfile.get(ch);
                if (myfile.eof())
                {
                    break;
                }
                cout << ch;
            }
        }
        else
            break;
        myfile.seekg(5, ios::cur);
    }

    myfile.close();
    return 0;
}

// output 
// Enter a string : hari love momo
// hari momo