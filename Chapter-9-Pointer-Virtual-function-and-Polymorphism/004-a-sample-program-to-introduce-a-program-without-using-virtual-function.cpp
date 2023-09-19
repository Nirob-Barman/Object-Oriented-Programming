#include <bits/stdc++.h>

using namespace std;

class BC
{
public:
    int b;
    void display()
    {
        cout << "b: " << b << endl;
    }
};

class DC : public BC
{
public:
    int d;
    void display()
    {
        cout << "b: " << b << endl;
        cout << "d: " << d << endl;
    }
};

int main()
{
    BC *bptr; // base pointer
    BC base;
    bptr = &base; // base address

    bptr->b = 100; // access BC via base pointer
    cout << "bptr points to base object" << endl;
    bptr->display();

    DC derived;
    bptr = &derived; // address of derived object
    bptr->b = 200;   // access DC via base pointer
    cout << "bptr points to derived object" << endl;
    bptr->display(); // bptr now points to the derived

    DC *dptr; // derived type pointer
    dptr = &derived;
    dptr->d = 300;
    cout << "dptr is derived type pointer" << endl;
    dptr->display(); // dptr now points to the derived

    cout << "using ((DC*)bptr)" << endl;
    ((DC *)bptr)->d = 400;
    ((DC *)bptr)->display();

    return 0;
}

// output
// bptr points to base object
// b: 100
// bptr points to derived object
// b: 200
// dptr is derived type pointer
// b: 200
// d: 300
// using ((DC*)bptr)
// b: 200
// d: 400
