#include<iostream>

using namespace std;

int volume(int s)   ///cube
{
    return s*s*s;
}
double volume(double r, int h)  ///cylinder
{
    return (3.14159*r*r*h);
}
long volume(long l, int b, int h)   ///rectangular box
{
    return (l*b*h);
}

int main()
{
    cout<<volume(10)<<endl;
    cout<<volume(2.5,8)<<endl;
    cout<<volume(101,75,15)<<endl;
}
