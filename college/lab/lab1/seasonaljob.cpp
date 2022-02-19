// (1) There is a vacancy for a seasonal job. Applicants are qualified to apply for the job only if they can lift at least 50 kg weight and are between 18 to 24 yrs of age. However, if the applicants have more than 4 yrs of experience in the field, they can qualify even if they can lift just 35 kg and are over 24 yrs of age. Write a program in C++ to input the information of applicants and check if they meet the required credentials for the job. 

#include <iostream>
using namespace std;
int main(){
    int age,weightLiftCapacity,experienceYear;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter the weight you can lift : ";
    cin>>weightLiftCapacity;
    cout<<"ENter Years of experience : ";
    cin>>experienceYear;
    if(age>=18 && age<=24 && weightLiftCapacity>=50){
        cout<<"You Meet the required credentials.";
    }
    else if(age>24 && experienceYear>4 && weightLiftCapacity>=35 ) {
         cout<<"You Meet the required credentials.";
    }
    else{
        cout<<"You don't meet the required credentials.";
    }
    return 0;
}