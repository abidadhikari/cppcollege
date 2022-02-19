// (2) Write a program to output the nth Fibonacci number using iteration. 
#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,n;
    cout<<"Enter number of term : ";
    cin>>n;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<"\t"<<b;
    }
    else if(n>2){
        cout<<a<<"\t"<<b<<"\t";
        for (int i = 2; i < n; i++)
        {
            int temp=a+b;
            cout<<temp<<"\t";
            a=b;
            b=temp;
        }
    }
    else{
        cout<<"Invalid Number of Terms";
    }
    return 0;
}