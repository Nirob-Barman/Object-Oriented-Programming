// a sample program to introduce multiple constructors in a class
#include <bits/stdc++.h>

using namespace std;

class complexNumber /// x + yj form
{
    float x; /// real part
    float y; /// imaginary part
public:
    complexNumber() {}
    complexNumber(float a) { x = y = a; }
    complexNumber(float real, float imaginary)
    {
        x = real;
        y = imaginary;
    }

    // Friend functions
    friend complexNumber sum(complexNumber, complexNumber);
    friend void showComplexNumber(complexNumber c);
};

complexNumber sum(complexNumber one, complexNumber two)
{
    complexNumber add;
    add.x = one.x + two.x;
    add.y = one.y + two.y;
    return add;
}

void showComplexNumber(complexNumber c)
{
    cout << c.x << " + " << c.y << "j" << endl;
}

int main()
{
    complexNumber A(2.7, 3.5);
    complexNumber B(1.6);
    complexNumber C;
    C = sum(A, B);

    cout << "A = ";
    showComplexNumber(A);
    cout << "B = ";
    showComplexNumber(B);
    cout << "C = ";
    showComplexNumber(C);

    return 0;
}

// output
// A = 3.1 + 5.65j
// B = 2.75 + 1.2j
// C = 5.85 + 6.85j