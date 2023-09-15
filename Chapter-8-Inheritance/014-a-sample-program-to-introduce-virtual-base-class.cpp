#include <bits/stdc++.h>

using namespace std;

class Base
{
public:
    int i;
};

// inherit Base as virtual
class Derived1 : virtual public Base
{
public:
    int j;
};
// inherit Base as virtual here too
class Derived2 : virtual public Base
{
public:
    int k;
};

// here, Derived3 inherits both Derived1 and Derived2
// however, only one copy of base is present
class Derived3 : public Derived1, public Derived2
{
public:
    int product() { return i * j * k; }
};

int main()
{
    Derived3 d;
    d.i = 10;
    d.j = 20;
    d.k = 30;
    cout << d.i << " " << d.j << " " << d.k << endl;
    cout << d.product() << endl;
    return 0;
}

// output
// 10 20 30
// 6000