#include <bits/stdc++.h>

using namespace std;

class Item
{
    int a, b;

public:
    // void setData(int x, int y);
    // void displayData();
    // void operator-(); // overload unary minus
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void displayData()
    {
        cout << a << " " << b << endl;
    }

    void operator-() // overload unary minus
    {
        a = -a;
        b = -b;
    }
};

// void Item::setData(int x, int y)
// {
//     a = x;
//     b = y;
// }

// void Item::displayData()
// {
//     cout << a << " " << b << endl;
// }

// void Item::operator-()
// {
//     a = -a;
//     b = -b;
// }

int main()
{
    Item object;
    cout << "Before overloading" << endl;
    object.setData(10, -20);
    object.displayData();
    cout << "After overloading" << endl;
    // object.operator-();
    -object;
    object.displayData();

    return 0;
}

// Before overloading
// 10 -20
// After overloading
// -10 20