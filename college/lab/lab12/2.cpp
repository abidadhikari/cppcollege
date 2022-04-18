// (2) Create a class named Person and record the data of 5 people in a file. Then, retrieve the written data and display information of only those people who are 30 yrs or older.

#include <iostream>
#include <fstream>
using namespace std;

const int arrlen = 5;

class person
{
public:
    int age;
    string name;
    void setValue()
    {
        cout << "Enter name : ";
        getline(cin>>ws,name);
        cout << "Enter Age : ";
        cin >> age;
    }
    void show()
    {
        cout << "Name : " << name << "(" << age << ")" << endl;
    }
};

int main()
{
    person p[5],pnew[5];
    for (int i = 0; i < arrlen; i++)
    {
        cout << "Enter data of person number " << i + 1 << endl;
        p[i].setValue();
    }

    fstream myfile;
    myfile.open("person.txt", ios::out | ios::binary);
    myfile.write((char *)&p, sizeof(p));
    myfile.close();
    
    myfile.open("person.txt", ios::in | ios::binary);
    myfile.read((char *)&pnew, sizeof(pnew));
    myfile.close();
    for (int i = 0; i < arrlen; i++)
        if (pnew[i].age >= 30)
        {
            pnew[i].show();
        }

    return 0;
}

// output 


// Enter data of person number 1
// Enter name : iyer
// Enter Age : 32
// Enter data of person number 2
// Enter name : venugopal iyer
// Enter Age : 30
// Enter data of person number 3
// Enter name : muttuswami venugopal iyer
// Enter Age : 29
// Enter data of person number 4
// Enter name : chinnaswami muttuswami venugopal iyer
// Enter Age : 25
// Enter data of person number 5
// Enter name : perambdur chinnaswami muttuswami venugopal iyer
// Enter Age : 20
// Name : iyer(32)
// Name : venugopal iyer(30)