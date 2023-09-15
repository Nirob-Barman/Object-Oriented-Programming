#include <bits/stdc++.h>

using namespace std;

class Alpha
{
    int x;

public:
    Alpha(int x)
    {
        this->x = x;
        cout << "Alpha constructor called" << endl;
    }
    void displayX()
    {
        cout << "x: " << x << endl;
    }
};

class Beta
{
    int y;

public:
    Beta(int y)
    {
        this->y = y;
        cout << "Beta constructor called" << endl;
    }
    void displayY()
    {
        cout << "y: " << y << endl;
    }
};

class Gamma : public Beta, public Alpha
{
    int m, n;

public:
    Gamma(int a, float b, int c, int d) : Alpha(a), Beta(b)
    {
        m = c;
        n = d;
        cout << "Gamma constructor called" << endl;
    }
    void display()
    {
        cout << "m: " << m << endl;
        cout << "n: " << n << endl;
    }
};

int main()
{
    // Alpha a(10);
    // a.displayX();
    // Beta b(20);
    // b.displayY();
    Gamma g(30, 40, 50, 60);
    g.displayX();
    g.displayY();
    g.display();

    return 0;
}

// output
// Beta constructor called
// Alpha constructor called
// Gamma constructor called
// x: 30
// y: 40
// m: 50
// n: 60