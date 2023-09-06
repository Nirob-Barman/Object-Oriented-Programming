#include <bits/stdc++.h>

using namespace std;

int volume(int side) /// cube
{
    return side * side * side;
}

double volume(double radius, int height) /// cylinder
{
    return (3.14159 * radius * radius * height);
}

long volume(long length, int breadth, int height) /// rectangular box
{
    return (length * breadth * height);
}

int main()
{
    cout << volume(10) << endl;
    cout << volume(2.5, 8) << endl;
    cout << volume(101, 75, 15) << endl;
}

// output
// 1000
// 157.079
// 113625
