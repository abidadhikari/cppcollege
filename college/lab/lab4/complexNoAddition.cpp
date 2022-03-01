// (1) Write a program in C++ for addition and subtraction of two complex numbers. Show the values of the original number as well as sum and difference. [Use class] 

#include <iostream>
using namespace std;
class ComplexNo{
    float a,b;
    public:
    ComplexNo(){
        a=0;
        b=0;
    }
    void getNumbers(){
        cout<<"Enter real number : ";
        cin>>a;
        cout<<"ENter Imaginary number : ";
        cin>>b;
    }
    void displayNumber(){
        cout<<a<<"+"<<"i("<<b<<")";
    }
    float getReal(){
        return a;
    }
    float getImaginary(){
        return b;
    }
};

class Calculator{
    ComplexNo c[2];
    public:
    void getData(int index){
        c[index].getNumbers();
    }
    void displayData(int index){
         c[index].displayNumber();
    }
    void sum(){
        float real=c[0].getReal()+c[1].getReal();
        float imaginary=c[0].getImaginary()+c[1].getImaginary();
         cout<<real<<"+"<<"i("<<imaginary<<")";
    }
    void difference(){
        float real=c[0].getReal()-c[1].getReal();
        float imaginary=c[0].getImaginary()-c[1].getImaginary();
         cout<<real<<"+"<<"i("<<imaginary<<")";
    }

};
int main(){
    Calculator cal;
    //taking input
    for (int i = 0; i < 2; i++)
    {
        cal.getData(i);
    }
    //original number
    for (int i = 0; i < 2; i++)
    {
        cout<<i+1<<" Number : ";
        cal.displayData(i);
        cout<<endl;
    }

    //sum
    cout<<"Sum is : ";
    cal.sum();

    //difference
    cout<<endl<<"Difference is :";
    cal.difference();
    
    return 0;
}