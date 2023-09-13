#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
    int length; // can't be inherited

public:
    int breadth; // inheritable
    void setData()
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }
    int getLength()
    {
        return length;
    }
    void displayLength()
    {
        cout << "Length: " << length << endl;
    }
};

class RectangleArea : private Rectangle
{
    // Rectangle become private member for the derived class RectangleArea
    int area;

public:
    void areaOfRectangle()
    {
        int area = getLength() * breadth;
        // cout << "The area of the rectangle is: " << area << endl;
    }
    void display()
    {
        displayLength();
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area << endl;
    }
};

int main()
{
    RectangleArea obj;
    // obj.setData(); // will not work as it has become private for the derived class
    obj.areaOfRectangle();
    obj.display();
    return 0;
}