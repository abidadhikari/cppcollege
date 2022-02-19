// (2) Write a program that inputs ‘n’ integers from the user. Then, create a function pointer to find the maximum value among these integers. The function definition itself should also use pointer for comparison. 

#include <iostream>
using namespace std;
int findMax(int arr[]){
    int highest=0;
    
}

int (*findMaxPtr)(int arr[]);

int main(){
    int n,values[100];
    cout<<"Enter a number of integers : ";
    cin>>n;
    cout<<"Enter "<<n<<" integer values : \n";
    for (int i = 0; i < n; i++)
    {
        cin>>values[i];
    }
    return 0;
}