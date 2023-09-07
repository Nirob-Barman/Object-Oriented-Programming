// A c++ program to compute area of a rectangle using function function overloading
#include <bits/stdc++.h>

using namespace std;

double calculateRectangleArea(double length, double width)
{
    return length * width;
}

double calculateSquareArea(double sideLength)
{
    return sideLength * sideLength;
}

int main()
{
    cout << "10 x 5.8 rectangle has area: ";
    cout << calculateRectangleArea(10.0, 5.8) << endl;

    cout << "10 x 10 square has area: ";
    cout << calculateSquareArea(10.0) << endl;

    return 0;
}

// output
// 10 x 5.8 rectangle has area: 58
// 10 x 10 square has area: 100
