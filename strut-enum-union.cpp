#include <iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float price;
};

int main(){
   enum Meal {breakfast,lunch,dinner};
   Meal m=dinner;
   cout<<breakfast<<endl;
    cout<<m<<endl;
    return 0;
}