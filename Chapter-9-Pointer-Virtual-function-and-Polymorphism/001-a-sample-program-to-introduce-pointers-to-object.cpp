#include <bits/stdc++.h>

using namespace std;

class Item
{
    int code;
    float price;

public:
    void setData(int a, float b)
    {
        code = a;
        price = b;
    }
    void display()
    {
        cout << "Code: " << code << " Price: " << price << endl;
    }
};

const int Size = 2;

int main()
{
    Item *p = new Item[Size];
    Item *d = p;
    int x;
    float y;
    for (int i = 0; i < Size; i++)
    {
        cout << "Input code and price for item: " << i + 1;
        cin >> x >> y;
        // p->setData(x, y);
        // p++;
        p[i].setData(x, y);
    }
    for (int i = 0; i < Size; i++)
    {
        cout << "Item: " << i + 1 << endl;
        d->display();
        d++;
    }

    return 0;
}
