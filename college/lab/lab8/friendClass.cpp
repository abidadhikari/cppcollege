// (1) Make use of a friend class to access private data members of another class.

#include <iostream>
using namespace std;

class B;

class A
{
    int num;
    friend class B;

public:
    A()
    {
        num = 5;
    }
};

class B
{
public:
    void displayAFromB(A a)
    {
        cout << "Value of num in class A is : " << a.num << endl;
    }
};

int main()
{
    A a;
    B b;
    b.displayAFromB(a);
    return 0;
}