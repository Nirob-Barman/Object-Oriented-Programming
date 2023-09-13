#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

class M
{
protected:
    int m;

public:
    void setValueM(int);
};
class N
{
protected:
    int n;

public:
    void setValueN(int);
};
class P : public M, public N
{
public:
    void display();
};

void M::setValueM(int x)
{
    m = x;
}

void N::setValueN(int y)
{
    n = y;
}

void P::display()
{
    cout << "Value of m: " << m << endl;
    cout << "Value of n: " << n << endl;
    cout << "m x n = " << m * n << endl;
}

int main()
{
    P p;
    p.setValueM(5);
    p.setValueN(6);
    p.display();

    return 0;
}

// output
// Value of m: 5
// Value of n: 6
// m x n = 30
