#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Count = 0;
    char ch;
    cout << "Input Text: ";
    cin.get(ch);

    while (ch != '\n')
    {
        cout.put(ch);
        cin.get(ch);
        Count++;
    }

    cout << endl;
    cout << "Number of Characters: " << Count << endl;

    return 0;
}

// input
// Input Text : abc

// output
// Number of Characters: 3