// (2) Create an array “ARR” of size 10 and input its contents from the user. Then, print the contents of “ARR + 5”.
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter data in array :"<<endl;
    for (int i = 0; i < 10; i++)
    {
       cin>>arr[i];
    }
    cout<<"Output :"<<endl;
    for (int i = 0; i < 10; i++)
    {
       cout<<arr[i]+5<<endl;
    }
    return 0;
}