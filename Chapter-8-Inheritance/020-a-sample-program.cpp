#include <bits/stdc++.h>

using namespace std;

class areaCalculate
{
public:
    double height;
    double width;
};

class Rectangle : public areaCalculate
{
public:
    Rectangle(double h, double w)
    {
        height = h;
        width = w;
    }
    double area()
    {
        return height * width;
    }
};

class Isosceles : public areaCalculate
{
public:
    Isosceles(double h, double w)
    {
        height = h;
        width = w;
    }
    double area()
    {
        return 0.5 * height * width;
    }
};

class Cylinder : public areaCalculate
{
public:
    float r;
    Cylinder(double h, double w, float x)
    {
        height = h;
        width = w;
        r = x;
    }
    double area()
    {
        return 2 * 3.14 * r * (r + height);
    }
};

int main()
{
    cout << "Calculating the area of rectangle" << endl;
    float r;
    cout << "Enter the radius: ";
    cin >> r;
    double h, w;
    cout << "Enter the height: ";
    cin >> h;
    cout << "Enter the width: ";
    cin >> w;
    Rectangle rect(h, w);
    Isosceles iso(h, w);
    Cylinder cyl(h, w, r);
    cout << "The area of rectangle is: " << rect.area() << endl;
    cout << "The area of isosceles is: " << iso.area() << endl;
    cout << "The area of cylinder is: " << cyl.area() << endl;
    return 0;
}

// input
// Enter the radius: 3.5
// Enter the height: 4.0
// Enter the width: 5.0

// output
// Calculating the area of rectangle
// The area of rectangle is: 20
// The area of isosceles is: 10
// The area of cylinder is: 164.85
