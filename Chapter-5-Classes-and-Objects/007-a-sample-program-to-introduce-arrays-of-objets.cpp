// a sample program to introduce arrays of objets
#include <bits/stdc++.h>

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
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
}

void employee::putData()
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}

const int arraysize = 3;

int main()
{
    employee manager[arraysize];
    for (int i = 0; i < arraysize; i++)
    {
        cout << "\nDetails of manager #" << i + 1 << endl;
        manager[i].getData();
    }
    cout << endl;
    for (int i = 0; i < arraysize; i++)
    {
        cout << "\nManager #" << i + 1 << endl;
        manager[i].putData();
    }
}

// input
// Details of manager #1
// Enter name : Alice
// Enter age : 35

// Details of manager #2
// Enter name : Bob
// Enter age : 40

// Details of manager #3
// Enter name : Carol
// Enter age : 45

// output
// Manager #1
// Name : Alice
// Age : 35

// Manager #2
// Name : Bob
// Age : 40

// Manager #3
// Name : Carol
// Age : 45