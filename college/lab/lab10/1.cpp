// (1) Create a function template to swap 2 values. Using its template function, swap 2 integer, floating point, and character values.

#include <iostream>
using namespace std;

template <class T1, class T2>
void swap(T1 &a, T2 &b)
{
    T1 temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 68;
    float b = 8.53;
    char c='a';
    swap(a,c);
    cout << "a is " << a<<endl<< "c is " << c<<endl;
    swap(b,a);
    cout << "b is " << b<<endl<< "a is " << a<<endl;
    return 0;
}


// OUTPUT 
// a is 97
// a is D
// b is 97
// a is 8