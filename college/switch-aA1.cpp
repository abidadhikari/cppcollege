// (3) Write a program that inputs 2 integers. Then, input the choice of the user and print the corresponding result. The user can choose (‘A’ / ‘a’ / ‘+’) for addition and (‘S’ / ‘s’ / ‘-’) for subtraction.

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char operation;
    cout << "Enter Two numbers : ";
    cin >> x >> y;
    cout << "Choose Operation :" << endl
         << "A or a or + (addition) | S or s or - (subtraction) :";
    cin >> operation;
    switch (operation)
    {
    case 'A':
    case 'a':
    case '+':
        cout << "Addition of " << x << " and " << y << " is " << x + y;
        break;
    case 'S':
    case 's':
    case '-':
        cout << "Subtraction of " << x << " and " << y << " is " << x - y;
        break;
    default:
        break;
    }
    return 0;
}