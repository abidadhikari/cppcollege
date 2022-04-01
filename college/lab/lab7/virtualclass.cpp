// write an oop for the following scenario.Make use of Virtual class

/*
     ELECTRONIC DEVICE
      |           |
      |           |
    PRINTER      SCANNER
        |          |
        |          |
      PHOTOCOPY-MACHINE
*/

#include <iostream>
using namespace std;

class ED
{
    int price;

public:
    void display()
    {
        cout << "Price is " << price << endl;
    }
    void getData()
    {
        cout << "Enter Price : ";
        cin >> price;
    }
};

class PRINTER : public virtual ED
{
    string typeOfInk;

public:
    void getPrinterData()
    {
        cout << "Enter type of ink : ";
        getline(cin >> ws, typeOfInk);
    }
    void displayPrinterData()
    {
        cout << typeOfInk << endl;
    }
};

class SCANNER : public virtual ED
{
    string gridPerArea;

public:
    void getScannerData()
    {
        cout << "Enter grid per area : ";
        getline(cin >> ws, gridPerArea);
    }
    void displayScannerData()
    {
        cout << gridPerArea << endl;
    }
};

class PM:public PRINTER,public SCANNER{
    public:
    void getPMData(){
        getData();
        getPrinterData();
        getScannerData();
    }
    void displayPMData(){
        display();
        displayPrinterData();
        displayScannerData();
    }
};

int main(){
    PM a;
    a.getPMData();
    a.displayPMData();
    return 0;
}