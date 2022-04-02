// (2) Write an object oriented program to overload the Pointer-To-Member (->) operator.

#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    Person(string n){
        name=n;
    }
    Person *operator ->(){
        return this;
    }
};
int main()
{
    Person p("abid adhikari");
    cout << p->name;
    return 0;
}
