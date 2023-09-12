#include <bits/stdc++.h>

using namespace std;

class coOrdinate
{
    int x, y;

public:
    // coOrdinate() {}
    // coOrdinate(int x, int y)
    // {
    //     this->x = x;
    //     this->y = y;
    // }
    // soluton in above comments

    coOrdinate operator=(coOrdinate ob2)
    {
        x = ob2.x;
        y = ob2.y;
        return *this;
    }
    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    coOrdinate ob1(10, 10), ob2;
    ob2 = ob1;
    ob2.display();
    return 0;
}