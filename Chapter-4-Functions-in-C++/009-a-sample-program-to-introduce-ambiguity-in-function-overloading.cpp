#include<iostream>

using namespace std;

float func(float i)
{
    return i;
}
double func(double i)
{
    return -i;
}
int main()
{
    cout<<func(10.1)<<endl;     ///unambiguous calls(double)
    cout<<func(10)<<endl;       ///ambiguous
}
