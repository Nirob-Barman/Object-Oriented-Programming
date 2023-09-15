#include <bits/stdc++.h>

using namespace std;

class Shape
{
public:
    int length;
};

// Inherit Shape as a virtual base class
class Rectangle : virtual public Shape
{
public:
    int width;
};

// Inherit Shape as a virtual base class here too
class Triangle : virtual public Shape
{
public:
    int height;
};

// Here, Polygon inherits both Rectangle and Triangle
// However, only one copy of Shape is present
class Polygon : public Rectangle, public Triangle
{
public:
    int area()
    {
        return length * width * height;
    }
};

int main()
{
    Polygon poly;
    poly.length = 10;
    poly.width = 20;
    poly.height = 30;

    cout << "Length: " << poly.length << " Width: " << poly.width << " Height: " << poly.height << endl;
    cout << "Area: " << poly.area() << endl;

    return 0;
}

// output
// Length: 10 Width: 20 Height: 30
// Area: 6000