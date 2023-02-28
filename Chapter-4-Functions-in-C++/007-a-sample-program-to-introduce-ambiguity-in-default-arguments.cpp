#include<iostream>

using namespace std;

int func(int i)
{
    return i;
}
int func(int i,int j)
{
    return i*j;
}
int main()
{
    cout<<func(4,5)<<endl;  ///unambiguous
    cout<<func(40)<<endl;   ///Error, ,ambiguous
}
