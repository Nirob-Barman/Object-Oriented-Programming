#include <bits/stdc++.h>

using namespace std;

char myFunc(unsigned char value)
{
    return value - 1;
}

char myFunc(char value)
{
    return value + 1;
}

int main()
{
    cout << myFunc('c') << endl; /// Error, ambiguous!
    cout << myFunc(88) << endl;

    return 0;
}
