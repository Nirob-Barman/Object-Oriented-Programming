#include <bits/stdc++.h> // preprocessor directive

using namespace std;

class Employee // class declaration
{
private:
    char employeeName[50];
    int employeeNumber;

public:
    void getValue()
    {
        cout << "Input Employee Name: ";
        cin >> employeeName;
        cout << "Input Employee Number: ";
        cin >> employeeNumber;
    }
    void displayValue()
    {
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee Number: " << employeeNumber << endl;
    }
};

int main()
{
    Employee object;
    object.getValue();
    object.displayValue();
}

// input
// Input Employee Name : John
// Input Employee Number : 34

// output
// Employee Name: John
// Employee Number: 34