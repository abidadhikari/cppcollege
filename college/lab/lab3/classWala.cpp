// (3) Create a class for an account holder with data members as account_no, account_holder_name and balance. Create two methods to store and retrieve these values of 3 customers.

#include <iostream>
using namespace std;

class Account
{
private:
    string account_holder_name;
    int account_no;
    float balance;

public:
    void takeData(){
        cout<<"Enter name : ";
        getline(cin>>ws,account_holder_name);
        cout<<"Enter Account Number : ";
        cin>>account_no;
        cout<<"Enter Balance : ";
        cin>>balance;
    }
    void displayData(){
        cout<<"-------------------------------"<<endl;
        cout<<"Name       : "<<account_holder_name<<endl;
        cout<<"Account No : "<<account_no<<endl;
        cout<<"Balance    : "<<balance<<endl;
        cout<<"-------------------------------"<<endl;
    }
};

int main(){
    Account a[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter Details for account index "<<i<<endl;
        a[i].takeData();
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<"Details for account index "<<i<<endl;
        a[i].displayData();
    }
    return 0;
    
}