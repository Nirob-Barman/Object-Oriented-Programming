/**
a c++ program to find the multiplication values and the cubic values using inline function
**/
#include<iostream>

using namespace std;

class line
{
public:
    inline float multiplication(float x, float y)
    {
        return x*y;
    }
    inline float cube(float x)
    {
        return x*x*x;
    }
};

int main()
{
    line object;
    float valOne, valTwo;
    cout<<"Enter two values: ";
    cin>>valOne>>valTwo;
    cout<<"\nMultiplication value is : "<<object.multiplication(valOne,valTwo)<<endl;
    cout<<"Cubic value is : "<<object.cube(valOne)<<"\t"<<object.cube(valTwo)<<endl;
}
