#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
    int length, breadth;

public:
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
    int getBreadth()
    {
        return breadth;
    }
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }
};

class reactangleArea : public Rectangle
{
public:
    void areaOfRectangle()
    {
        // int area = length * breadth; // can't inherit the private member
        int area = getLength() * getBreadth(); // member function is used to get the value
        cout << "The area of the rectangle is: " << area << endl;
    }
};

int main()
{
    reactangleArea obj;
    obj.setData();
    obj.display();
    obj.areaOfRectangle();
    return 0;
}