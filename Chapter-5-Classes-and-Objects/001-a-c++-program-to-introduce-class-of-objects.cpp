// a c++ program to introduce class of objects

#include <bits/stdc++.h>

using namespace std;

class item
{
    int number;
    float cost;

public:
    // void getData(int a, float b);
    void getData(int a, float b)
    {
        number = a;
        cost = b;
    }
    void putData(void)
    {
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

/**
Member function definition
**/
// void item::getData(int a, float b) /// use membership label
// {
//     number = a; /// private variables
//     cost = b;   /// directly used
// }

/**
main program
**/
int main()
{
    item x; /// create an object x
    cout << "Object x : " << endl;
    x.getData(100, 299.95); /// call member function
    x.putData();            /// call member function

    item y; /// create another object
    cout << "Object y : " << endl;
    y.getData(200, 175.50);
    y.putData();

    return 0;
}

// output
// Object x :
// Number: 100
// Cost: 299.95
// Object y :
// Number: 200
// Cost: 175.5
