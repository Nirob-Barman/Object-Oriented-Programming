/**
compute area of a rectangle using default arguments
**/
#include<iostream>

using namespace std;

double rectangleArea(double length, double width = 0)
{
    if(!width)
        width = length;
    return length*width;
}
int main()
{
    cout<<"10 x 5.8 rectangle has area : ";
    cout<<rectangleArea(10.0, 5.8)<<endl;

    cout<<"10 x 10 rectangle has area : ";
    cout<<rectangleArea(10.0)<<endl;
}
