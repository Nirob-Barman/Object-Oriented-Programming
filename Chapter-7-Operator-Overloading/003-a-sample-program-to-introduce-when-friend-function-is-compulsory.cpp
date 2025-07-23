#include <bits/stdc++.h>

using namespace std;

class coOrdinate
{
    int x, y;

public:
    coOrdinate() {}
    coOrdinate(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    // friend coOrdinate operator+(int i, coOrdinate ob);
    friend coOrdinate operator+(int i, coOrdinate ob)
    {
        return coOrdinate(i + ob.x, i + ob.y);
    }
    void displayCoOrdinate()
    {
        cout << x << " " << y << endl;
    }
};

// coOrdinate operator+(int i, coOrdinate ob)
// {
//     coOrdinate result;
//     result.x = i + ob.x;
//     result.y = i + ob.y;
//     return result;
// }

// coOrdinate operator+(int i, coOrdinate ob)
// {
//     return coOrdinate(i + ob.x, i + ob.y);
// }

int main()
{
    coOrdinate O1(10, 10);
    cout << "Before overloading" << endl;
    O1.displayCoOrdinate();
    cout << "After overloading" << endl;
    O1 = 99 + O1;
    O1.displayCoOrdinate();
    return 0;
}