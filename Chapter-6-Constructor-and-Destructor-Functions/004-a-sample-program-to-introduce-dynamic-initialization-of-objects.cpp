// a sample program to introduce dynamic initialization of objects
#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
    int length, breadth;

public:
    // Constructor with dynamic initialization
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle rect(3, 4);
    cout << "Area of rectangle = " << rect.area() << endl;
    return 0;
}