#include <bits/stdc++.h>

using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Show function in Base class" << endl;
    }
    virtual void display()
    {
        cout << "Display function in Base class" << endl;
    }
};

class Derived : public Base
{
    void show()
    {
        cout << "Show function in Derived class" << endl;
    }
    void display()
    {
        cout << "Display function in Derived class" << endl;
    }
};

int main()
{
    Base b1;
    Base *bptr;

    Derived d1;
    cout << "bptr points to base" << endl;
    bptr = &b1;
    bptr->show();    // calls Base versions
    bptr->display(); // calls Base versions

    cout << "bptr points to derived" << endl;
    bptr = &d1;
    bptr->show();    // calls Derived versions
    bptr->display(); // calls Derived versions
    
    return 0;
}

// output
// bptr points to base
// Show function in Base class
// Display function in Base class
// bptr points to derived
// Show function in Base class
// Display function in Derived class
