// Returning reference values
#include <iostream>
using namespace std;
int x;
// global variable
int &setx();
int main()
{
    setx() = 99;
    cout << "x = " << x << endl;
    return 0;
}
int &setx()
{
    return x;
}