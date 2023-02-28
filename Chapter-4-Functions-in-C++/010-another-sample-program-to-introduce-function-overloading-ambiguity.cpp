#include<iostream>

using namespace std;

char f(unsigned char ch)
{
    return ch-1;
}
char f(char ch)
{
    return ch+1;
}
int main()
{
    cout<<f('c')<<endl;     ///Error, ambiguous!
    cout<<f(88)<<endl;
}
