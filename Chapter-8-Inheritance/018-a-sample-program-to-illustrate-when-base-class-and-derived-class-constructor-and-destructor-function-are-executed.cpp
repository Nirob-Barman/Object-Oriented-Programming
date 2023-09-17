#include <bits/stdc++.h>

using namespace std;

class baseClass1
{
public:
    baseClass1()
    {
        cout << "Constructing baseClass1" << endl;
    }
    ~baseClass1()
    {
        cout << "Destructing baseClass1" << endl;
    }
};

class baseClass2
{
    int b;

public:
    baseClass2()
    {
        cout << "Constructing baseClass2" << endl;
    }
    ~baseClass2()
    {
        cout << "Destructing baseClass2" << endl;
    }
};

// inherit two baseClass classes
class derivedClass : public baseClass1, public baseClass2
{
public:
    derivedClass()
    {
        cout << "Constructing derivedClass" << endl;
    }
    ~derivedClass()
    {
        cout << "Destructing derivedClass" << endl;
    }
};

int main()
{
    derivedClass d;

    return 0;
}

// output
// Constructing baseClass1
// Constructing baseClass2
// Constructing derivedClass
// Destructing derivedClass
// Destructing baseClass2
// Destructing baseClass1
