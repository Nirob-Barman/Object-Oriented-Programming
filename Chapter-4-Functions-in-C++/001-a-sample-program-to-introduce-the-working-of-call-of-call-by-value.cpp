#include<iostream>

using namespace std;

void swapValues(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<"Value of a and b in the function: "<<a<<" "<<b<<endl;
}

int main()
{
    int a = 5, b = 7;
    cout<<"Value of a and b in main function before swap: "<<a<<" "<<b<<endl;
    swapValues(a,b);
    cout<<"Value of a and b in main function after swap: "<<a<<" "<<b<<endl;
}
