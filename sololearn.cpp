#include <iostream>
using namespace std;
int main(){
    int emptySeats=50;
    int noOfBus=0;
    int totalPassengers;
    cout<<"Enter number of Passengers :";
    cin>>totalPassengers;
    while (totalPassengers>0)
    {
        noOfBus++;
        if(totalPassengers>=50)
        totalPassengers-=50;
        else{
            emptySeats-=totalPassengers;
            break;
        }
    }
    cout<<"IN Bus number "<< noOfBus<<" ,Empty Seats are "<<emptySeats<<endl;
    
    return 0;
}