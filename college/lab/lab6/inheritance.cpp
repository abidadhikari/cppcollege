// 1.write a program to read and display the information about an author.an author is a person[use private derivation.]
#include <iostream>
using namespace std;
class person
{
    string name;
    int age;

public:
    void getdata()
    {
        cout << "enter your name" << endl;
        cin >> name;
        cout << "enter age" << endl;
        cin >> age;
    }
    void displayData()
    {
       cout<<"Name is  "<<name<<endl;
       cout<<"Age is  "<<age<<endl;
    }
};
class author : private person
{
    int years_of_experience;
    string publishing_house;

public:
    void getDetails(){
        getdata();
        cout << "enter years of experience " << endl;
        cin >> years_of_experience;
        cout << "enter name of publishing house " << endl;
        cin >> publishing_house;
    }

    void display_author_data()
    {
        displayData();
        cout<<"years of experience is san"<<years_of_experience<<endl;
        cout<<" Name of Publishing house is "<<publishing_house<<endl;
    }

    
};
int main()
{
    author a;
    a.getDetails();
    a.display_author_data();

    return 0;
}
