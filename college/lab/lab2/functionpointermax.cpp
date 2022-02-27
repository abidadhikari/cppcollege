// (2) Write a program that inputs ‘n’ integers from the user. Then, create a function pointer to find the maximum value among these integers. The function definition itself should also use pointer for comparison. 

#include <iostream>
using namespace std;
int findMax(int arr[],int size){
    int highest=*arr;
    for (int i = 0; i <size; i++)
    {
        if (*(arr+i)>highest)
        {
            highest=*(arr+i);
        }
    }
    return highest;
}
int main(){
    int n,values[100],(*ptrFunc)(int [],int);
    
    cout<<"Enter a number of integers : ";
    cin>>n;
    cout<<"Enter "<<n<<" integer values : \n";
    for (int i = 0; i < n; i++)
    {
        cin>>values[i];
    }
    ptrFunc=findMax;
    cout<<"Largest integer is "<<ptrFunc(values,n)<<endl;
    return 0;
}