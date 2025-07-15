// a sample program to introduce parameterized constructor
#include <bits/stdc++.h>

using namespace std;

class integerNumber
{
    int m, n;

public:
    // integerNumber(int, int); // Parameterized constructor declaration
    integerNumber(int x, int y)
    {
        m = x;
        n = y;
    }
    void displayIntegerNumber() // Member function to display m and n
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};

// integerNumber::integerNumber(int x, int y)
// {
//     m = x;
//     n = y;
// }

int main()
{
    integerNumber A(0, 100);
    A.displayIntegerNumber();
}

// output
// m = 0
// n = 100