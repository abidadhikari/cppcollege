// (3) Write a program that prompts a student to enter the marks they obtained in Object Oriented Programming. Output the corresponding grade they obtained. (0-59 = F, 7-69 = D, 70-79 = C, 80-89 = B, 90-100 = A). 

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks in OOP : ";
    cin>>marks;
    if (marks<=59)
    {
        cout<<"F";
    }
    else if(marks>=60 && marks <=69){
        cout<<"D";
    }
    else if(marks>=70 && marks <=79){
        cout<<"C";
    }
    else if(marks>=80 && marks <=89){
        cout<<"B";
    }
    else{
        cout<<"A";
    }
    return 0;
}