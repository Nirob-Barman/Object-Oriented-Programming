#include <bits/stdc++.h>

using namespace std;

class baseClass
{
    int x;

public:
    void setX(int _x)
    {
        x = _x;
    }
    int getX()
    {
        return x;
    }
};

class derivedClass : public baseClass
{
    int y;

public:
    void setY(int _y)
    {
        y = _y;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    baseClass *p; // pointer to baseClass type
    baseClass baseObject;
    derivedClass derivedObject;
    p = &baseObject; // use p to access baseClass object
    p->setX(10);
    cout << "Base object x: " << p->getX() << endl;

    p = &derivedObject; // use p to access derivedClass object
    p->setX(20);

    derivedObject.setY(30); // can't use p to set y. so do it directly
    cout << "Derived object y: " << derivedObject.getY() << endl;

    return 0;
}

// output
// Base object x: 10
// Derived object y: 30