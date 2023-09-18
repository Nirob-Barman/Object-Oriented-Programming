#include <bits/stdc++.h>

using namespace std;

int main()
{
    // char *string1 = "c++";
    // char *string2 = "programming";
    const char *string1 = "c++";
    const char *string2 = "programming";
    int m = strlen(string1);
    int n = strlen(string2);

    for (int i = 0; i < n; i++)
    {
        // cout.write(string2, i);
        cout.write(string2, i + 1);
        cout << endl;
    }

    for (int i = n; i > 0; i--)
    {
        cout.write(string2, i);
        cout << endl;
    }

    cout.write(string1, m).write(string2, n);
    cout << endl;

    cout.write(string1, 10);

    return 0;
}

// output
// p
// pr
// pro
// prog
// progr
// progra
// program
// programm
// programmi
// programmin
// programming
// programming
// programmin
// programmi
// programm
// program
// progra
// progr
// prog
// pro
// pr
// p
// c++programming
// c++
