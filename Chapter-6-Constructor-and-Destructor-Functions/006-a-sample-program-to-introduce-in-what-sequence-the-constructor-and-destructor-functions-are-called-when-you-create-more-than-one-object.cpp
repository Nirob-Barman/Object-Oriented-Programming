// a sample program to introduce in what sequence the constructor and destructor functions are called when you create more than one object
#include <bits/stdc++.h>

using namespace std;

class A
{
    int a, b;

public:
    A()
    {
        cout << "Constructing Object without........" << endl;
        a = 10;
        b = 10;
    }
    A(int _a, int _b)
    {
        cout << "Constructing Object........" << endl;
        a = _a;
        b = _b;
    }
    ~A()
    {
        cout << "Destructing Object........" << endl;
    }
};

A ob;
int main()
{
    A ob1, ob2(10, 10);
    cout << endl;
    cout << "........." << endl;
    {
        A ob3;
        cout << "Local Object" << endl;
    }
    cout << "........." << endl;
    cout << endl;
    return 0;
}

// output
// Constructing Object without........
// Constructing Object without........
// Constructing Object........

// .........
// Constructing Object without........
// Local Object
// Destructing Object........
// .........

// Destructing Object........
// Destructing Object........
// Destructing Object........
