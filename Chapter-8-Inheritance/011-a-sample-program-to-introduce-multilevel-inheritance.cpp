#include <bits/stdc++.h>

using namespace std;

class Base
{
protected:
    int b;

public:
    void set()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    }
    void display()
    {
        cout << "b = " << b << endl;
    }
};

class Derived1 : public Base
{
    int d1;

public:
    void set()
    {
        Base::set();
        cout << "Enter the value of d1: ";
        cin >> d1;
    }
    void display()
    {
        Base::display();
        cout << "d1 = " << d1 << endl;
    }
};

class Derived2 : public Derived1
{
    int d2;

public:
    void set()
    {
        Derived1::set();
        cout << "Enter the value of d2: ";
        cin >> d2;
    }
    void display()
    {
        Derived1::display();
        cout << "d2 = " << d2 << endl;
    }
};

int main()
{
    Derived2 obj;
    obj.set();
    obj.display();
    return 0;
}

// input
// Enter the value of b: 5
// Enter the value of d1: 10
// Enter the value of d2: 15

// output
// b = 5
// d1 = 10
// d2 = 15