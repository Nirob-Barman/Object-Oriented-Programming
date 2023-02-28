#include<iostream>

using namespace std;

class employee
{
    char name[30];
    float age;
public:
    void getData();
    void putData();
};
void employee::getData()
{
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
}
void employee::putData()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

const int arraysize = 3;

int main()
{
    employee manager[arraysize];
    for(int i=0;i<arraysize;i++)
    {
        cout<<"\nDetails of manager #"<<i+1<<endl;
        manager[i].getData();
    }
    cout<<endl;
    for(int i=0;i<arraysize;i++)
    {
        cout<<"\nManager #"<<i+1<<endl;
        manager[i].putData();
    }
}
