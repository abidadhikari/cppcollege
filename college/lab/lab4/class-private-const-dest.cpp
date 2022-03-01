// (2) Create a constructor to initiate any private data member. Later overload it to set different type of data member. Your program must also include a destructor. 

#include <iostream>
using namespace std;

class Details{
    string name;
    int age;
    float weight;
    public:
    Details(){
        name="Unknown";
        age=weight=0;

    }
    Details(string,int,int);
    ~Details();
    void getData(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter weight : ";
        cin>>weight;

    }
    void displayData(){
        cout<<endl<<"-------------------------------------------"<<endl;
         cout<<name<<endl<<"Age : "<<age<<endl<<"Weight : "<<weight<<endl;
        cout<<endl<<"-------------------------------------------"<<endl;
    }
};
Details::Details(string n,int a,int w){
    name=n;
    age=a;
    weight=w;
}
Details::~Details(){
    name="Unknown";
    age=weight=0;
    cout<<endl<<"---------Object Destroyed---------"<<endl;
}

int main(){
    Details d1;
    d1.getData();
    d1.displayData();
    Details d2("Random Name",19,60);
    d2.displayData();
    return 0;
}
