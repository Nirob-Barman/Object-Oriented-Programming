// a c++ program to introduce nesting of member function
#include <bits/stdc++.h>

using namespace std;

class setFunction
{
    int m, n;

public:
    void input();
    void display();
    int largest();
};

int setFunction::largest()
{
    if (m >= n)
        return m;
    else
        return n;
}

void setFunction::input()
{
    cout << "Input values of m and n is : ";
    cin >> m >> n;
}

void setFunction::display()
{
    cout << "Largest value = " << largest() << endl;
}

int main()
{
    setFunction object;
    object.input();
    object.display();
}

// input
// Input values of m and n is :
// 5 4

// output
// Largest value = 5