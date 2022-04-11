// (1) Write a program that overloads the binary arithmetic '/' operator using a friend function. 

#include <iostream>
using namespace std;
class A{
    float x;
    public:
    A(){
        x=0;
    }
    A(float a){
        x=a;
    }
    friend A operator / (A,A);
    float displayA(){
        return x;
    }
};


A operator / (A a1, A a2){
    return A(a1.x/a2.x);
}

int main(){
    A a1(307),a2(13);
    A newA =(a1/a2);
    cout<<"New value is "<<newA.displayA();
    return 0;
}

// #include <iostream>
// using namespace std;
// class B;
// class A{
//     float x;
//     public:
//     A(){
//         x=0;
//     }
//     A(float a){
//         x=a;
//     }
//     friend A  operator / (A,B);
//     float displayA(){
//         return x;
//     }
// };

// class B{
//     float x;
//     public:
//     B(){
//         x=0;
//     }
//     B(float a){
//         x=a;
//     }
//     friend A  operator / (A,B);
// };

// A operator /(A a,B b){
//     return A(a.x/b.x);
// }

// int main(){
//     A a(5);
//     B b(10);
//     A newA =a/b;
//     cout<<"New value is "<<newA.displayA();
//     return 0;
// }
