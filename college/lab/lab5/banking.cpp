// (1) Write a program to simulate banking transactions of 3 users. The program must be menu driven. Include the following operations in the menu:
// 1. Deposit
// 2. Withdraw
// 3. Display Balance
// 4. Display Total Operations
// 5. Exit
// Use a static member function to display total number of operations (option 4) performed through the application.

#include <iostream>
using namespace std;

class Transaction
{
    float balance;
    static int totalOperation;

public:
    Transaction()
    {
        totalOperation = balance = 0;
    }

    void deposite(float x = 0)
    {
        balance += x;
        cout << x << " amount has been deposite." << endl;
        totalOperation++;
    }

    void withdraw(float x = 0)
    {
        if ((balance - x) < 0)
        {
            cout << "Not sufficient balance " << endl;
        }
        else
        {
            balance -= x;
            cout << x << " amount has been widthdrawn." << endl;
            totalOperation++;
        }
    }

    void displayBalance()
    {
        cout << "Your balance is " << balance << endl;
        totalOperation++;
    }
    void displayTotalOperation()
    {
        cout << "Total Operation : " << totalOperation<<endl;
    }
};
int Transaction::totalOperation;

int main()
{
    Transaction t[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Operation for " << i + 1 << " user" << endl;
        int active = 1;
        do
        {
            int a, amount;
            cout << "Enter Operation Code : ";
            cin >> a;
            switch (a)
            {
            case 1:
                cout << "Deposite" << endl;
                cout << "Enter amount :";
                cin >> amount;
                t[i].deposite(amount);
                break;
            case 2:
                cout << "Withdraw" << endl;
                cout << "Enter amount :";
                cin >> amount;
                t[i].withdraw(amount);
                break;
            case 3:
                cout<<"Total Balance :"<<endl;
                t[i].displayBalance();
                break;
            case 4:
                // cout<<"Total Operations :"<<endl;
                t[i].displayTotalOperation();
                break;
            case 5:
            default:
                cout<<"Exited"<<endl;
                active=0;
                break;
            }
        } while (active == 1);
        cout<<endl<<"---------------------------------"<<endl;
    }
    return 0;
}