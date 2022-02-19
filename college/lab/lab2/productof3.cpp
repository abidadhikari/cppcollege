// (1) Create a function that calculates the product of 3 numbers entered by the user, regardless of the number entered being integer or floating point. Print the result as output.

#include <iostream>
using namespace std;
float product(float a, float b, float c)
{
    return a * b * c;
}
int product(int a, int b, int c)
{
    return a * b * c;
}
int main()
{
    float a, b, c;
    cout << "Enter Three Numbers :\n";
    cin >> a >> b >> c;
    cout << "THe resulting product is :"<<product(a, b, c);
    return 0;
}