#include <bits/stdc++.h>

using namespace std;

class Base
{
public:
    virtual void show() = 0; // pure virtual function
};

class Derived1 : public Base
{
public:
    void show()
    {
        cout << "Derived 1" << endl;
    }
};

class Derived2 : public Base
{
public:
    void show()
    {
        cout << "Derived 2" << endl;
    }
};

int main()
{
    Base *b;
    Derived1 d1;
    Derived2 d2;

    b = &d1;
    b->show();
    b = &d2;
    b->show();

    return 0;
}

// output
// Derived 1
// Derived 2