// 1.write a program to read and display the information about an author.an author is a person[use private derivation.]
#include <iostream>
using namespace std;
class person
{
    string name;
    int age;

public:
    void getdata()
    {
        cout << "Enter your name : " << endl;
        getline(cin >> ws, name);
        cout << "Enter age : " << endl;
        cin >> age;
    }
    void displayData()
    {
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
    }
};
class author : private person
{
    int years_of_experience;
    string publishing_house;

public:
    void getDetails()
    {
        getdata();
        cout << "Enter years of experience " << endl;
        cin >> years_of_experience;
        cout << "Enter name of publishing house " << endl;
        getline(cin >> ws, publishing_house);
    }

    void display_author_data()
    {
        displayData();
        cout << "Years of experience is " << years_of_experience << endl;
        cout << "Name of Publishing house is " << publishing_house << endl;
    }
};
int main()
{
    author a;
    a.getDetails();
    a.display_author_data();
    return 0;
}
