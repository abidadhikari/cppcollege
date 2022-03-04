// (2) Write a program to output the nth Fibonacci number using iteration. 
#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,n,temp;
    cout<<"Enter number of term : ";
    cin>>n;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<b;
    }
    else if(n>2){
        // cout<<a<<"\t"<<b<<"\t";
        for (int i = 2; i < n; i++)
        {
            temp=a+b;
            // cout<<temp<<"\t";
            a=b;
            b=temp;
        }
        cout<<temp;
    }
    else{
        cout<<"Invalid Number of Terms";
    }
    return 0;
}