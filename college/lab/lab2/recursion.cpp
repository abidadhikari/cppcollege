// (3) Write a program to find the sum of 1 - (22/2!) + (32/3!) - (42/4!) + (52/5!) - ..... (n2/n!). [Use recursion for the factorial part].     yo mathi ko 2 haina square ho

#include <iostream>
using namespace std;
int fact(int a)
{
    if (a <= 1) 
        return 1;
    else
        return a * fact(a - 1);
}
int main()
{
    int n, sum = 0;
    cout << "Enter the Number of Terms : ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= ((i * i) / fact(i));
        }
        else
        {
            sum += ((i * i) / fact(i));
        }
    }
    cout << "THe sum is : "<<sum;

    return 0;
}