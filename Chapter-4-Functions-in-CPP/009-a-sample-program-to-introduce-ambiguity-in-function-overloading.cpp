#include <bits/stdc++.h>

using namespace std;

float myFunc(float value)
{
    return value;
}

double myFunc(double value)
{
    return -value;
}

int main()
{
    cout << myFunc(10.1) << endl; /// unambiguous calls(double)
    cout << myFunc(10) << endl;   /// ambiguous

    return 0;
}
