#include <bits/stdc++.h>

using namespace std;

const int len = 20;

class Student
{
    char firstName[len], lastName[len];
    int age, rollNo;

public:
    void getInfo()
    {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll no: ";
        cin >> rollNo;
    }
    void displayInfo()
    {
        cout << "First name: " << firstName << endl;
        cout << "Last name: " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no: " << rollNo << endl;
    }
};

class Arts : public Student
{
    char subject1[len];
    char subject2[len];
    char subject3[len];

public:
    void getInfo()
    {
        Student::getInfo();
        cout << "Enter subject 1 of arts student: ";
        cin >> subject1;
        cout << "Enter subject 2 of arts student: ";
        cin >> subject2;
        cout << "Enter subject 3 of arts student: ";
        cin >> subject3;
    }
    void displayInfo()
    {
        Student::displayInfo();
        cout << "Subject 1 of arts student: " << subject1 << endl;
        cout << "Subject 2 of arts student: " << subject2 << endl;
        cout << "Subject 3 of arts student: " << subject3 << endl;
    }
};

class Commerce : public Student
{
    char subject1[len];
    char subject2[len];
    char subject3[len];

public:
    void getInfo()
    {
        Student::getInfo();
        cout << "Enter subject 1 of commerce student: ";
        cin >> subject1;
        cout << "Enter subject 2 of commerce student: ";
        cin >> subject2;
        cout << "Enter subject 3 of commerce student: ";
        cin >> subject3;
    }
    void displayInfo()
    {
        Student::displayInfo();
        cout << "Subject 1 of commerce student: " << subject1 << endl;
        cout << "Subject 2 of commerce student: " << subject2 << endl;
        cout << "Subject 3 of commerce student: " << subject3 << endl;
    }
};

class Science : public Student
{
    char subject1[len];
    char subject2[len];
    char subject3[len];

public:
    void getInfo()
    {
        Student::getInfo();
        cout << "Enter subject 1 of science student: ";
        cin >> subject1;
        cout << "Enter subject 2 of science student: ";
        cin >> subject2;
        cout << "Enter subject 3 of science student: ";
        cin >> subject3;
    }
    void displayInfo()
    {
        Student::displayInfo();
        cout << "Subject 1 of science student: " << subject1 << endl;
        cout << "Subject 2 of science student: " << subject2 << endl;
        cout << "Subject 3 of science student: " << subject3 << endl;
    }
};

int main()
{
    Arts artsStudent;
    cout << "Enter the details of arts student: " << endl;
    artsStudent.getInfo();
    cout << "Displaying the details of arts student: " << endl;
    artsStudent.displayInfo();

    Commerce commerceStudent;
    cout << "Enter the details of commerce student: " << endl;
    commerceStudent.getInfo();
    cout << "Displaying the details of commerce student: " << endl;
    commerceStudent.displayInfo();

    Science scienceStudent;
    cout << "Enter the details of science student: " << endl;
    scienceStudent.getInfo();
    cout << "Displaying the details of science student: " << endl;
    scienceStudent.displayInfo();

    return 0;
}

// input
// Enter the details of arts student:
// Enter first name: John
// Enter last name: Doe
// Enter age: 18
// Enter roll no: 101
// Enter subject 1 of arts student: History
// Enter subject 2 of arts student: Literature
// Enter subject 3 of arts student: Psychology
// Enter the details of commerce student:
// Enter first name: Jane
// Enter last name: Smith
// Enter age: 17
// Enter roll no: 102
// Enter subject 1 of commerce student: Accounting
// Enter subject 2 of commerce student: Economics
// Enter subject 3 of commerce student: Business Studies
// Enter the details of science student:
// Enter first name: David
// Enter last name: Johnson
// Enter age: 18
// Enter roll no: 103
// Enter subject 1 of science student: Physics
// Enter subject 2 of science student: Chemistry
// Enter subject 3 of science student: Biology

// output
// Displaying the details of arts student:
// First name: John
// Last name: Doe
// Age: 18
// Roll no: 101
// Subject 1 of arts student: History
// Subject 2 of arts student: Literature
// Subject 3 of arts student: Psychology
// Displaying the details of commerce student:
// First name: Jane
// Last name: Smith
// Age: 17
// Roll no: 102
// Subject 1 of commerce student: Accounting
// Subject 2 of commerce student: Economics
// Subject 3 of commerce student: Business Studies
// Displaying the details of science student:
// First name: David
// Last name: Johnson
// Age: 18
// Roll no: 103
// Subject 1 of science student: Physics
// Subject 2 of science student: Chemistry
// Subject 3 of science student: Biology
