// a sample program to demonstrate how friend functions works as bridge between the classes
#include <bits/stdc++.h>

using namespace std;

class ABC; /// forward declaration

class XYZ
{
    int x;

public:
    void setValue(int value)
    {
        x = value;
    }
    friend void maxValue(XYZ, ABC);
};

class ABC /// forward declaration
{
    int a;

public:
    void setValue(int value)
    {
        a = value;
    }
    friend void maxValue(XYZ, ABC);
};

void maxValue(XYZ m, ABC n) /// definition of friend
{
    if (m.x > n.a)
        cout << "The max value is : " << m.x << endl;
    else
        cout << "The max value is : " << n.a << endl;
}

int main()
{
    ABC abc;
    abc.setValue(10);

    XYZ xyz;
    xyz.setValue(20);

    maxValue(xyz, abc);
}

// output
// The max value is : 20
