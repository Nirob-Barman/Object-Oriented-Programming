// A sample program to introduce how default arguments work
/**
compute area of a rectangle using default arguments
**/
#include <bits/stdc++.h>

using namespace std;

double rectangleArea(double length, double width = 0)
{
    if (!width)
        width = length;
    return length * width;
}
int main()
{
    cout << "10 x 5.8 rectangle has area : ";
    cout << rectangleArea(10.0, 5.8) << endl;

    cout << "10 x 10 rectangle has area : ";
    cout << rectangleArea(10.0) << endl;
}

// output
// 10 x 5.8 rectangle has area : 58
// 10 x 10 rectangle has area : 100