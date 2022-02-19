// (1) Write a program using branching statements to evaluate the roots of a quadratic equation ax^2+bx+c.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b,c,discriminant,r1,r2;
    cout<<"Enter Coefficient of quadratic equation (a,b,c) : ";
    cin>>a>>b>>c;
    discriminant=(b*b)-(4*a*c);
    if(discriminant==0){
        r1=r2=-b/(2*a);
        cout<<"The real and equal roots are : "<<r1<<endl;
    }
    else if(discriminant>0){
        r1=(-b+sqrt(discriminant))/(2*a);
        r2=(-b-sqrt(discriminant))/(2*a);
        cout<<"THe real and different roots are : "<<r1<<" , "<<r2<<endl;
    }
    else{
        float real=-b/(2*a);
        float imaginary=sqrt(-discriminant)/(2*a);
        cout<<"The Complex and different roots are : "<<real<<"-"<<imaginary<<
        "i , "<<real<<"+"<<imaginary<<"i"<<endl;
    }
    return 0;
}