// (1) Write a program to demonstrate a catch block which catches all exceptions.

#include <iostream>
using namespace std;

void checkAge(int num)
{
    try
    {
        if (num < 0)
            throw 1;
        else if (num == 0)
            throw 1.0;
        else
            cout << "Your Age is " << num << endl;
    }
    catch (...)
    {
        cout << "ERROR (Age can't be 0 or negative)" << endl;
    }
}

int main()
{
    checkAge(20);
    checkAge(-5);
    checkAge(0);
    return 0;
}

// OUTPUT 
// Your Age is 20
// ERROR (Age can't be 0 or negative)
// ERROR (Age can't be 0 or negative)