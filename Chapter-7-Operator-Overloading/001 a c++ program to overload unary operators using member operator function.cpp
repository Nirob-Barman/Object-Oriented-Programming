#include <bits/stdc++.h>

using namespace std;

class item
{
    int a, b;

public:
    void getData(int x, int y);
    void putData();
    void operator-(); /// overload unary minus
};

void item::getData(int x, int y)
{
    a = x;
    b = y;
}
void item::putData()
{
    cout << a << endl
         << b << endl;
}
void item::operator-()
{
    a = -a;
    b = -b;
}

int main()
{
    item object;
    object.getData(10, -20);
    cout << "without Overloading" << endl;
    object.putData();
    -object;
    cout << "After Overloading" << endl;
    object.putData();
}
