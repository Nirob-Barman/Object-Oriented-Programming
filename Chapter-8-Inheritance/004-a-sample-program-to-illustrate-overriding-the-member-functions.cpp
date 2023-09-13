#include <bits/stdc++.h>

using namespace std;

const int len = 20;

class Employee
{
private:
    char firstName[len];
    int idNumber;
    int age;
    float salary;

public:
    void setData()
    {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter id number: ";
        cin >> idNumber;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayData()
    {
        cout << "First name: " << firstName << endl;
        cout << "Id number: " << idNumber << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Engineer : public Employee
{
private:
    char designation[len];

public:
    void setData()
    {
        Employee::setData(); // Overriding of the member function
        cout << "Enter designation: ";
        // cin >> designation;
        cin.ignore();
        cin.getline(designation, len);
    }
    void displayData()
    {
        cout << "Displaying the particulars of the Engineer" << endl;
        Employee::displayData(); // Overriding of the member function
        cout << "Designation: " << designation << endl;
    }
};

int main()
{
    // Employee emp;
    Engineer eng;
    eng.setData();
    eng.displayData();
    return 0;
}

// input
// Enter first name: John
// Enter id number: 1234
// Enter age: 30
// Enter salary: 55000
// Enter designation: Software Engineer

// output
// Displaying the particulars of the Engineer
// First name: John
// Id number: 1234
// Age: 30
// Salary: 55000
// Designation: Software Engineer