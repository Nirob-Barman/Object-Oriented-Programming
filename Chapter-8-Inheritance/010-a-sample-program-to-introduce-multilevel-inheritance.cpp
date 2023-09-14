#include <bits/stdc++.h>

using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void setRollNumber(int roll)
    {
        rollNumber = roll;
    }
    int getRollNumber()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Student
{
protected:
    float subject1Marks;
    float subject2Marks;

public:
    void setMarks(float marks1, float marks2)
    {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }
    void displayMarks()
    {
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
    }
};

class Result : public Test // Second-level derivation
{
    float totalMarks; // Private by default
public:
    void displayResult()
    {
        getRollNumber();
        displayMarks();
        cout << "Total Marks: " << subject1Marks + subject2Marks << endl;
    }
};

int main()
{
    Result studentResult;
    studentResult.setRollNumber(101);
    studentResult.setMarks(50, 60);
    studentResult.displayResult();

    return 0;
}

// output
// Roll Number: 101
// Subject 1 Marks: 50
// Subject 2 Marks: 60
// Total Marks: 110
