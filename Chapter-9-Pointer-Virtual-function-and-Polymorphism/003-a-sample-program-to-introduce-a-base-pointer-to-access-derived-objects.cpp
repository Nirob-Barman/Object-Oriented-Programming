#include <bits/stdc++.h>

using namespace std;

class baseClass
{
    int i;

public:
    void setI(int _i)
    {
        i = _i;
    }
    int getI()
    {
        return i;
    }
};

class derivedClass : public baseClass
{
    int j;

public:
    void setJ(int _j)
    {
        j = _j;
    }
    int getJ()
    {
        return j;
    }
};

int main()
{
    baseClass *bp;
    derivedClass d;

    bp = &d; // baseClass pointer points to derived object

    bp->setI(10);
    cout << bp->getI() << endl;
    return 0;
}