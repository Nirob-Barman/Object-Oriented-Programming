#include <bits/stdc++.h>

using namespace std;

class Complex
{
    float realPart;
    float imagPart;

public:
    // Complex()
    // {
    //     realPart = 0;
    //     imagPart = 0;
    // }
    Complex() {}
    Complex(float r, float i)
    {
        realPart = r;
        imagPart = i;
    }
    // Complex operator+(Complex);
    Complex operator+(Complex c)
    {
        Complex result;
        result.realPart = realPart + c.realPart;
        result.imagPart = imagPart + c.imagPart;
        return result;
    }
    void displayComplex()
    {
        cout << realPart << " + " << imagPart << "i" << endl;
    }
};

// Complex Complex::operator+(Complex c)
// {
//     Complex result;
//     result.realPart = realPart + c.realPart;
//     result.imagPart = imagPart + c.imagPart;
//     return result;
// }

int main()
{
    Complex C1, C2, C3;
    C1 = Complex(2.5, 3.5);
    C2 = Complex(1.6, 2.7);
    C3 = C1 + C2;
    C1.displayComplex();
    C2.displayComplex();
    cout << "..........." << endl;
    C3.displayComplex();

    return 0;
}