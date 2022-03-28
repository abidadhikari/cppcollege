//Using Friend Function, print the sum of private data members of two classes

#include <iostream>
using namespace std;

class B;
class A{
    int price;
    public:
    void getData(){
        cout<<"Enter Price : ";
        cin>>price;
    }
    friend void sum(A a,B b);
};

class B{
    int price;
    public:
    void getData(){
        cout<<"Enter Price : ";
        cin>>price;
    }
    friend void sum(A a,B b);
};

void sum(A a,B b){
    cout<<"Sum is "<<a.price+b.price<<endl;
}

int main(){
    A a;
    B b;
    a.getData();
    b.getData();
    sum(a,b);
    return 0;
}