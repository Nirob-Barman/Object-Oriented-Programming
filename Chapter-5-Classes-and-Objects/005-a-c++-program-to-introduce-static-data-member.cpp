#include<iostream>

using namespace std;

class item
{
    static int counts;
    int number;
public:
    void getData(int _number)
    {
        number = _number;
    }
    void getCount()
    {
        cout<<"Count : ";
        cout<<counts<<endl;
    }
};

int item::counts;

int main()
{
    item a,b,c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    cout<<"After reading data "<<endl;
    a.getCount();
    b.getCount();
    c.getCount();
}
