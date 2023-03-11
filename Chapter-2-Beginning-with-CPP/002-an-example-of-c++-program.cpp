#include <iostream>

using namespace std;

int main()
{
    int yearNow, ageNow, anotherYear, anotherAge;

    cout << "Enter the current year then press RETURN.\n";
    cin >> yearNow;
    cout << "Enter your current age in years.\n";
    cin >> ageNow;

    cout << "Enter the year for which you wish to know your age.\n";
    cin >> anotherYear;
    anotherAge = anotherYear - (yearNow - ageNow);

    if (anotherAge >= 0)
    {
        cout << "Your age in " << anotherYear << ":";
        cout << anotherAge << endl;
    }
    else
    {
        cout << "Your were not even born in ";
        cout << anotherYear << endl;
    }
}
