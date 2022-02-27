#include <iostream>
using namespace std;
// class DOB
// {
// private:
//    int day,month,year;
// public:
//    void getDate(){
//        cout<<"Enter dates: ";
//        cin>>day>>month>>year;
//    }
//    void outDate(){
//        cout<<day<<"/";
//        cout<<month<<"/";
//        cout<<year<<endl;
//    }
// };

class Details
{
private:
    string name, address;
    class DOB
    {
    private:
        int day, month, year;

    public:
        void getDate()
        {
            cout << "Enter dates: ";
            cin >> day >> month >> year;
        }
        void outDate()
        {
            cout << day << "/";
            cout << month << "/";
            cout << year << endl;
        }
    };
    DOB d;

public:
    Details(/* args */);
    ~Details();
    void getData()
    {
        cout << "Name : ";
        getline(cin >> ws, name);
        cout << "Get Address : ";
        getline(cin >> ws, address);
        d.getDate();
    }
    void outData();
};

Details::Details(/* args */)
{
    cout << "Constructure Triggered." << endl;
}

Details::~Details()
{
    cout << "Destructure Triggered." << endl;
}
void Details::outData()
{
    cout << "Name :" << name << endl;
    cout << "Address :" << address << endl;
    d.outDate();
}

int main()
{
    Details d1;
    d1.getData();
    d1.outData();
    return 0;
}