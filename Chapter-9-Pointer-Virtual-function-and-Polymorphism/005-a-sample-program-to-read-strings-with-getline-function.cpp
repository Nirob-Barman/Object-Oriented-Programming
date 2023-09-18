#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Size = 20;
    char city[Size];

    cout << "Enter city names: ";
    cin >> city;
    cout << "City name: " << city << endl;

    cout << "Enter city name again: ";
    cin.getline(city, Size);
    cout << "City name now: " << city << endl;

    cout << "Enter another city name: ";
    cin.getline(city, Size);
    cout << "New city name: " << city << endl;

    return 0;
}

// input
// Enter city names: NewYork
// Enter city name again: 
// Los Angeles
// Enter another city name: San Francisco

// output
// City name: NewYork
// City name now: 
// Los Angeles
// New city name: San Francisco
