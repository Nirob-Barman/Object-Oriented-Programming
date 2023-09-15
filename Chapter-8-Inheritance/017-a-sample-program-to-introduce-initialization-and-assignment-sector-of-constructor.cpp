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
    void displayAlpha()
    {
        cout << "x: " << x << endl;
    }
};

class Beta
{
    float p, q;

public:
    // Beta(float a, float b) : p(a), q(b + p)
    // {
    //     cout << "Beta constructor called" << endl;
    // }
    Beta(float a, float b)
    {
        p = a;
        q = b + p;
        cout << "Beta constructor called" << endl;
    }
    void displayBeta()
    {
        cout << "p: " << p << " q: " << q << endl;
    }
};

class Gamma : public Beta, public Alpha
{
    int u, v;

public:
    Gamma(int a, int b, int c) : Alpha(a * 2), Beta(c, c), u(c)
    {
        v = b;
        cout << "Gamma constructor called" << endl;
    }
    void displayGamma()
    {
        cout << "u: " << u << endl;
        cout << "v: " << v << endl;
    }
};

int main()
{
    // Alpha a(10);
    // a.displayAlpha();
    // Beta b(2, 3);
    // b.displayBeta();
    Gamma g(4, 5, 6);
    g.displayAlpha();
    g.displayBeta();
    g.displayGamma();

    return 0;
}

// output
// Beta constructor called
// Alpha constructor called
// Gamma constructor called
// x: 8
// p: 6 q: 12
// u: 6
// v: 5