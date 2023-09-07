// a sample program to introduce returning objects
#include <bits/stdc++.h>

using namespace std;

class complexNumber /// x + yj form
{
    float x; /// real part
    float y; /// imaginary part
public:
    void input(float real, float imaginary)
    {
        x = real;
        y = imaginary;
    }
    friend complexNumber sum(complexNumber, complexNumber);
    void showComplexNumber(complexNumber c);
};

complexNumber sum(complexNumber one, complexNumber two)
{
    complexNumber add;
    add.x = one.x + two.x;
    add.y = one.y + two.y;
    return add;
}

void complexNumber::showComplexNumber(complexNumber c)
{
    cout << c.x << " + " << c.y << "j" << endl;
}

int main()
{
    complexNumber A, B, C;
    A.input(3.1, 5.65);
    B.input(2.75, 1.2);

    C = sum(A, B);
    cout << "A = ";
    A.showComplexNumber(A);
    cout << "B = ";
    B.showComplexNumber(B);
    cout << "C = ";
    C.showComplexNumber(C);
}

// output
// A = 3.1 + 5.65j
// B = 2.75 + 1.2j
// C = 5.85 + 6.85j