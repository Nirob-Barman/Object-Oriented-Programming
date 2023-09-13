#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
private:
    float length; // this can't be inherited
public:
    float breadth; // this data and member functions are inheritable
    void setData()
    {
        cout << "Enter the length and breadth of the rectangle: ";
        cin >> length >> breadth;
    }
    float getLength()
    {
        return length;
    }
};

class Area : public Rectangle
{
    float area;

public:
    void setArea()
    {
        area = getLength() * breadth;
        // area = length * breadth; // can't be used here
    }

    // solution
    // void display()
    // {
    //     cout << "Length: " << getLength() << endl;
    //     cout << "Breadth: " << breadth << endl;
    //     cout << "Area: " << area << endl;
    // }
};

void display()
{
    cout << "Length: " << getLength << endl;

    // object of the derived class can't inherit the private member of the base class
    // thus the member functoin used here to get the value of data member length

    cout << "Breadth: " << breadth << endl;
    cout << "Area: " << area << endl;
}

int main()
{
    Rectangle obj;
    // solution
    // Area obj;
    obj.setData();
    obj.setArea();
    obj.display();
    return 0;
}