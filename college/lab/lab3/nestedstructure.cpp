// (1) Create a structure for a pharmaceutical company having three departments. Each department can have a maximum of 5 employees, out of which one is a department head. Input as well as display the information of the departments’ employees. [Use nested structure] 


#include <iostream>
using namespace std;

const int departmentNo=3,employeeNo=5;

struct Employee{
    string name;
    int isHead;
};

struct Department{
    string name;
    int companyId;
    Employee e[employeeNo];
} d[departmentNo];

int checkHead(int dep,int index){
    int temp=0;
    for (int i = 0; i < index; i++)
    {
        if(d[dep].e[i].isHead==1){
            temp=1;
            break;
        }
    }
    return temp;
    
}

int main(){
    // Taking input 
    for (int i = 0; i < departmentNo; i++)
    {
        cout<<"Enter data of Department "<<i+1<<endl;
        cout<<"Enter Department name :";
        getline(cin>>ws,d[i].name);
        d[i].companyId=i+1;
        cout<<"Enter Employee Details :"<<endl;
        for (int j = 0; j < employeeNo; j++)
        {
            cout<<"Enter name of employee "<<j+1<<endl;
            getline(cin>>ws,d[i].e[j].name);
            if(checkHead(i,j)){
                cout<<"Head Alreay exists"<<endl;
            }
            else{
                cout<<"IsHead? : ";
                cin>>d[i].e[j].isHead;
            }
        }
        
    }

    cout<<endl<<"----------------------------------------------"<<endl;
    //Displaying Result
    for (int i = 0; i < departmentNo; i++)
    {
        cout<<"Data for department "<<d[i].name<<endl;
        cout<<"Employee Details :";
        for (int j = 0; j < employeeNo; j++)
        {
            cout<<d[i].e[j].name<<endl;
            cout<<"isHead : "<<d[i].e[j].isHead;
            cout<<endl<<"*********************************************"<<endl;
        }
        
    }
    
    return 0;
}