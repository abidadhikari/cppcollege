//  Write a program for the following scenario. Make use of Abstract Base Class.
/*
    ___MEDIA___
     |       |
     |       |
    BOOK   AUDIO TAPE 
*/

#include <iostream>
using namespace std;

class MEDIA{
    public:
    virtual float cost()=0;
};

class BOOK:public MEDIA{
    int noOfPage;
    int pricePerPage;
    public:
    void setValue(){
        cout<<"Enter Number of Pages and price per page  : ";
        cin>>noOfPage>>pricePerPage;
    }
    float cost(){
        return (pricePerPage*noOfPage);
    }
};

class AT:public MEDIA{
    int timeInSecond;
    int pricePerSecond;
    public:
        void setValue(){
        cout<<"Enter Media Duration in Second and per second price : ";
        cin>>timeInSecond>>pricePerSecond;
    }
    float cost(){
        return (timeInSecond*pricePerSecond);
    }
};

int main(){
    BOOK b;
    AT a;
    b.setValue();
    a.setValue();
    cout<<"Price of book is "<<b.cost()<<endl;
    cout<<"Price of audio tape is "<<a.cost()<<endl;
    return 0;
}