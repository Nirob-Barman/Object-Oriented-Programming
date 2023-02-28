#include<iostream>

using namespace std;

class test
{
    int code;
    static int counts;  ///static member variable
public:
    void setCode()
    {
        code = ++counts;
    }
    void showCode()
    {
        cout<<"Object number : "<<code<<endl;
    }
    static void showCount()     ///static member function
    {
        cout<<"Count : "<<counts<<endl;
    }
};
int test::counts;

int main()
{
    test objectOne,objectTwo,objectThree;
    objectOne.setCode();
    objectTwo.setCode();

    test::showCount();  ///accessing static information

    objectThree.setCode();
    test::showCount();


    objectOne.showCode();
    objectTwo.showCode();
    objectThree.showCode();
}
