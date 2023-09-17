#include <bits/stdc++.h>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Constructing Base" << endl;
    }
    ~Base()
    {
        cout << "Destructing Base" << endl;
    }
};

// inherit the Base class
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructing Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructing Derived" << endl;
    }
};

int main()
{
    Derived d;

    return 0;
}

// output
// Constructing Base
// Constructing Derived
// Destructing Derived
// Destructing Base