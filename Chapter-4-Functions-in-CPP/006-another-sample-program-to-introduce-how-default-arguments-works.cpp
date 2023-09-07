// Another sample program to introduce how default arguments works
#include <bits/stdc++.h>

using namespace std;

float value(float p, int n, float r)
{
    int year = 1, sum;
    float jum = p;
    while (year <= n)
    {
        sum *= (1 + r);
        year += 1;
    }
    return sum;
}

void printLine(char ch, int len)
{
    for (int i = 1; i < len; i++)
    {
        cout << ch << endl;
    }
}

int main()
{
    float amount;
    float value(float p, int n, float r = 0.15);
    void printLine(char ch = '*', int len = 40);
    printLine();
    amount = value(5000.00, 5);
    cout << "Final value = " << amount << endl
         << endl;
    printLine('=');
    return 0;
}
