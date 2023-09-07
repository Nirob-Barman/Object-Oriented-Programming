// a c++ program to introduce static data member
#include <bits/stdc++.h>

using namespace std;

class item
{
    static int counts;
    int number;

public:
    void getData(int _number)
    {
        number = _number;
        counts++;
    }
    void getCount()
    {
        cout << "Count : " << item::counts << endl;
    }
};

int item::counts;

int main()
{
    item a, b, c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    cout << "After reading data " << endl;
    a.getCount();
    b.getCount();
    c.getCount();
}

// output
// Count : 0
// Count : 0
// Count : 0
// After reading data
// Count : 3
// Count : 3
// Count : 3
