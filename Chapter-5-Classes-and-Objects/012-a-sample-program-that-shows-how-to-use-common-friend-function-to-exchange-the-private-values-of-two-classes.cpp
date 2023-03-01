#include <iostream>

using namespace std;

class class_2;

class class_1
{
    int value;

public:
    void inputData(int a)
    {
        value = a;
    }
    void displayData()
    {
        cout << value << endl;
    }
    friend void exchangeValue(class_1 &, class_2 &);
};

class class_2
{
    int value;

public:
    void inputData(int a)
    {
        value = a;
    }
    void displayData()
    {
        cout << value << endl;
    }
    friend void exchangeValue(class_1 &, class_2 &);
};

void exchangeValue(class_1 &x, class_2 &y)
{
    int temp = x.value;
    x.value = y.value;
    y.value = temp;
}

int main()
{
    class_1 C1;
    class_2 C2;

    C1.inputData(100);
    C2.inputData(200);

    cout << "Values before exchange" << endl;
    C1.displayData();
    C2.displayData();

    exchangeValue(C1, C2); /// swapping

    cout << "Values after exchange" << endl;
    C1.displayData();
    C2.displayData();
}
