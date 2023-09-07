// A sample program to introduce how inline function works
/**
a c++ program to find the multiplication values and the cubic values using inline function
**/

#include <bits/stdc++.h>

using namespace std;

class Calculator
{
public:
    inline float multiply(float x, float y)
    {
        return x * y;
    }

    inline float calculateCube(float x)
    {
        return x * x * x;
    }
};

int main()
{
    Calculator calc;
    float value1, value2;

    cout << "Enter two values: ";
    cin >> value1 >> value2;

    cout << "\nMultiplication value: " << calc.multiply(value1, value2) << endl;
    cout << "Cubic value of " << value1 << ": " << calc.calculateCube(value1) << endl;
    cout << "Cubic value of " << value2 << ": " << calc.calculateCube(value2) << endl;

    return 0;
}

// input
// Enter two values:  5 2

// output
// Multiplication value: 10
// Cubic value of 5: 125
// Cubic value of 2: 8