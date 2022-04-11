// (2) Write a program using exception handling in which an object type is thrown.

#include <iostream>
using namespace std;

void checkAge(int);
class Person
{

public:
    int age = 0;
    void setValue()
    {
        cout << "Enter age : ";
        cin >> age;
    }
    void checkAge(Person);
};

int main()
{
    Person p;
    p.setValue();
    p.checkAge(p);
    return 0;
}

void Person::checkAge(Person p)
{
    try
    {
        if (p.age <= 0)
        {
            throw p;
        }
        else
        {
            cout << endl
                 << "--------Valid Age--------" << endl;
            cout << "Your age is " << p.age << endl;
        }
    }
    catch (Person p)
    {
        cout << "Invalid Age (" << p.age << ")" << endl;
    }
}