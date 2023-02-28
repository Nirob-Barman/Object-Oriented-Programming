#include<iostream>

using namespace std;

class student
{
public:
    char name[30], roll[10];
    int bangla,english,math;

    void input()
    {
        cout<<"Name : ";
        scanf(" %s",name);
        cout<<endl;
        cout<<"Marks of Bengali : ";
        cin>>bangla;
        cout<<endl;
        cout<<"Marks of English : ";
        cin>>english;
        cout<<endl;
        cout<<"Marks of Math : ";
        cin>>math;
        cout<<endl;
    }
    void output()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Marks of Bengali : "<<bangla<<endl;
        cout<<"Marks of English : "<<english<<endl;
        cout<<"Marks of Math : "<<math<<endl;
    }
};
int main()
{
    int numberOfStudents;
    cout<<"How many students : ";
    cin>>numberOfStudents;
    student *studentObjects;
    studentObjects = new student[numberOfStudents];

    for(int i=1;i<=numberOfStudents;i++)
    {
        cout<<"\nStudent #"<<i;
        studentObjects[i].input();
    }
    for(int i=1;i<=numberOfStudents;i++)
    {
        cout<<"\nStudent #"<<i;
        studentObjects[i].output();
    }
}
