// 2) Write a program to demonstrate the following scenario of hierarchical inheritance: 
// vehicle
    // | car
    // | boat
    // | aeroplane

#include <iostream>
using namespace std;

class Vehicle{
    float mileage;
    float maxSpeed;
    public:
    void getData(){
        cout<<"Enter Mileage : ";
        cin>>mileage;
        cout<<"Enter max speed : ";
        cin>>maxSpeed;
    }
    void displayData(){
        cout<<"Mileage : "<<mileage<<endl;
        cout<<"Max Speed : "<<maxSpeed<<endl;
    }

};

class Car:public Vehicle{
    int noOfSeats;
    public:
    void getCarData(){
        cout<<endl<<"------------CAR------------"<<endl;
        getData();
        cout<<"Enter number of seats : ";
        cin>>noOfSeats;
    }
    void displayCarData(){
        cout<<endl<<"------------CAR------------"<<endl;
        displayData();
        cout<<"No of seats : "<<noOfSeats<<endl;
    }
};

class Boat:public Vehicle{
    int noOfMotors;
    public:
    void getBoatData(){
        cout<<endl<<"------------BOAT------------"<<endl;
        getData();
        cout<<"Enter number of motors : ";
        cin>>noOfMotors;
    }
    void displayBoatData(){
        cout<<endl<<"------------BOAT------------"<<endl;
        displayData();
        cout<<"No of motors : "<<noOfMotors<<endl;
    }
};

class Aeroplane:public Vehicle{
    int noOfpropellers;
    public:
    void getAeroplaneData(){
        cout<<endl<<"------------AEROPLANE------------"<<endl;
        getData();
        cout<<"Enter number of propellers : ";
        cin>>noOfpropellers;
    }
    void displayAeroplaneData(){
        cout<<endl<<"------------AEROPLANE------------"<<endl;
        displayData();
        cout<<"No of propellers : "<<noOfpropellers<<endl;
    }
};

int main(){
    Car c ;
    Boat b ;
    Aeroplane a ;
    c.getCarData();
    b.getBoatData();
    a.getAeroplaneData();
    c.displayCarData();
    b.displayBoatData();
    a.displayAeroplaneData();
    return 0;
}