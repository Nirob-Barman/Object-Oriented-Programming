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

class Test : virtual public Student
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

class Sports : public virtual Student
{
protected:
    float score;

public:
    void setGameScore(float s)
    {
        score = s;
    }
    void displayScore()
    {
        cout << "Score: " << score << endl;
    }
};

class Result : public Test, public Sports
{
    float totalMarks;

public:
    void displayResult()
    {
        getRollNumber();
        displayMarks();
        displayScore();
        cout << "Total Marks: " << subject1Marks + subject2Marks + score << endl;
    }
};

int main()
{
    Result studentResult;
    studentResult.setRollNumber(101);
    studentResult.setMarks(90, 80);
    studentResult.setGameScore(90);

    studentResult.displayResult();

    return 0;
}

// output
// Roll Number: 101
// Subject 1 Marks: 90
// Subject 2 Marks: 80
// Score: 90
// Total Marks: 260