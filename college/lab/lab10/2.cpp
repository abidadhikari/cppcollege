// (2) Write a program to demonstrate a class template for any suitable situation of your choice.

#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
class Report
{
    T1 marks1;
    T2 marks2;
    T3 marks3;
    float percentage;

public:
    char result;
    void setValue(T1 a, T2 b, T3 c, char x = 'F')
    {
        marks1 = a;
        marks2 = b;
        marks3 = c;
        result = 'F';
    }

    void getResult()
    {
        if (marks1 < 40 || marks2 < 40 || marks3 < 40)
            result = 'F';
        else
            result = 'P';
    }
};

int main()
{
    Report<int, float, float> std1;
    Report<int, int, float> std2;
    std1.setValue(5, 33, 99);
    std1.getResult();
    cout << "Student 1 " << ((std1.result == 'P') ? "PASSED" : "FAILED") << endl;
    std2.setValue(50, 80, 95);
    std2.getResult();
    cout << "Student 2 " << ((std2.result == 'P') ? "PASSED" : "FAILED") << endl;
    return 0;
}

// OUTPUT 
// Student 1 FAILED
// Student 2 PASSED