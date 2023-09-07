// A sample program to introduce ambiguity in default arguments
#include <bits/stdc++.h>

using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

int multiply(int x)
{
    return x;
}

int main()
{
    cout << multiply(4, 5) << endl; /// unambiguous
    cout << multiply(40) << endl;   /// Error, ,ambiguous
}
