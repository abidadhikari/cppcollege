#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
int d,e;
void setData(int a1,int b1,int c1); // Declaration
void getData(){
    cout<<"THe value of a is "<<a<<endl;
    cout<<"THe value of a is "<<b<<endl;
    cout<<"THe value of a is "<<c<<endl;
    cout<<"THe value of a is "<<d<<endl;
    cout<<"THe value of a is "<<e<<endl;
}

};

void Employee::setData(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee harry;
    harry.d=4;
    harry.e=5;
    harry.setData(1,2,3);
    harry.getData();
    return 0;
}