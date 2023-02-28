#include <iostream>

using namespace std;

class employee
{
private:
    char empname[50];
    int empno;

public:
    void getvalue()
    {
        cout << "Input Employee Name: ";
        cin >> empname;
        cout << "Input Employee Number: ";
        cin >> empno;
    }
    void displayValue()
    {
        cout << "Employee Name: " << empname << endl;
        cout << "Employee Number: " << empno << endl;
    }
};
int main()
{
    employee object;
    object.getvalue();
    object.displayValue();
}
