#include <bits/stdc++.h>

using namespace std;

class Circle // first base class
{
protected:
    float radius;

public:
    void setRadius()
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }
    void displayCircleArea()
    {
        cout << "The area of the circle is: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle // second base class
{
protected:
    float length;
    float breadth;

public:
    void setLength()
    {
        cout << "Enter the length: ";
        cin >> length;
    }
    void setBreadth()
    {
        cout << "Enter the breadth: ";
        cin >> breadth;
    }
    void displayRectangleArea()
    {
        cout << "The area of the rectangle is: " << length * breadth << endl;
    }
};

class Cylinder : public Circle, public Rectangle // derived class, inherited
{
public:
    void displayCylinderVolume()
    {
        // setRadius();
        // setLength();
        float cylinderVolume = 3.14 * radius * radius * length;
        cout << "The volume of the cylinder is: " << cylinderVolume << endl;
    }
};

int main()
{
    Circle C;
    cout << "Getting the radius of the circle:" << endl;
    C.setRadius();
    C.displayCircleArea();
    cout << endl;

    Rectangle R;
    cout << "Getting the length and breadth of the rectangle:" << endl;
    R.setLength();
    R.setBreadth();
    R.displayRectangleArea();
    cout << endl;

    Cylinder Cyl;
    cout << "Getting the radius and length of the cylinder:" << endl;
    Cyl.setRadius();
    Cyl.setLength();
    Cyl.displayCylinderVolume();

    return 0;
}

// input output
// Getting the radius of the circle:
// Enter the radius of the circle: 5
// The area of the circle is: 78.5

// Getting the length and breadth of the rectangle:
// Enter the length: 3
// Enter the breadth: 4
// The area of the rectangle is: 12

// Getting the radius and length of the cylinder:
// Enter the radius of the circle: 2
// Enter the length: 5
// The volume of the cylinder is: 62.8
