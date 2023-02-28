/**
#include<iostream>

using namespace std;

class myClass
{
    ///private to myClass
    int a;
public:
    void set_a(int number)
    {
        int get_a();
    }
};
void myClass::set_a(int number)
{
    a = number;
}
int myClass::get_a()
{
    return a;
}

int main()
{
    myClass objectOne, objectTwo;
    objectOne.set_a(10);
    objectTwo.set_a(99);

    cout<<objectOne.get_a()<<endl;
    cout<<objectTwo.get_a()<<endl;
}
**/
