// (1) Write a program to demonstrate a catch block which catches all exceptions.

#include <iostream>
using namespace std;

void checkNumber(int num)
{
    try
    {
        if (num < 0)
            throw 1;
        else if (num == 0)
            throw 1.0;
        else
            cout << "Your Number is " << num << endl;
    }
    catch (...)
    {
        cout << "ERROR (Number can't be 0 or negative)" << endl;
    }
}

int main()
{
    checkNumber(1);
    checkNumber(-1);
    checkNumber(0);
    return 0;
}