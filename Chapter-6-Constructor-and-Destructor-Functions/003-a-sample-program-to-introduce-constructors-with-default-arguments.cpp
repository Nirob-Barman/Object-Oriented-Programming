// a sample program to introduce constructors with default arguments
#include <bits/stdc++.h>

using namespace std;

class myClass
{
    int x;

public:
    myClass(int n = 0) { x = n; }
    int getX() { return x; }
};

int main()
{
    myClass obj(10); // declare with initial value
    myClass obj2;    // delcare without initializer
    cout << "Obj: " << obj.getX() << endl;
    cout << "Obj2: " << obj2.getX() << endl;
    return 0;
}

// output
// Obj: 10
// Obj2 : 0
