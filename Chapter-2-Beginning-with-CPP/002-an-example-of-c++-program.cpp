#include <bits/stdc++.h>

using namespace std;

int main()
{
    int currentYear, currentAge, targetYear, targetAge;

    cout << "Enter the current year then press RETURN.\n";
    cin >> currentYear;
    cout << "Enter your current age in years.\n";
    cin >> currentAge;

    cout << "Enter the year for which you wish to know your age.\n";
    cin >> targetYear;
    targetAge = targetYear - (currentYear - currentAge);
    cout << endl;

    if (targetAge >= 0)
    {
        cout << "Your age in " << targetYear << ":";
        cout << targetAge << endl;
    }
    else
    {
        cout << "You were not even born in ";
        cout << targetYear << endl;
    }
}

// input
// Enter the current year then press RETURN.
// 2023
// Enter your current age in years.
// 26
// Enter the year for which you wish to know your age.
// 1999

// output
// Your age in 1999 : 2