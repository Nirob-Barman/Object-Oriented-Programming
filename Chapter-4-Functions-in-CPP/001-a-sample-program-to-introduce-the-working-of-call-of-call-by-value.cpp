// A sample program to introduce the working of call of call by value
#include <bits/stdc++.h>

using namespace std;

void swapValues(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "Value of x and y in the function: " << x << " " << y << endl;
}

int main()
{
    int x = 5, y = 7;
    cout << "Value of x and y in main function before swap: " << x << " " << y << endl;
    swapValues(x, y);
    cout << "Value of x and y in main function after swap: " << x << " " << y << endl;
}

// output
// Value of x and y in main function before swap: 5 7
// Value of x and y in the function: 7 5
// Value of x and y in main function after swap: 5 7
