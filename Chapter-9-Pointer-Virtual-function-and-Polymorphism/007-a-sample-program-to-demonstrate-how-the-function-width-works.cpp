#include <bits/stdc++.h>

using namespace std;

int main()
{
    int items[4] = {10, 8, 12, 15};
    int cost[4] = {75, 100, 60, 90};

    cout.width(5);
    cout << "Items: ";
    cout.width(8);
    cout << "Cost: ";

    cout.width(15);
    cout << "Total Value: " << endl;

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cout.width(5);
        cout << items[i] << " ";
        cout.width(8);
        cout << cost[i] << " ";

        int value = items[i] * cost[i];

        cout.width(15);
        // cout << items[i] * cost[i] << endl;
        // sum += items[i] * cost[i];
        cout << value << endl;
        sum += value;
    }
    cout << "Grand Total: ";
    cout.width(2);
    cout << sum << endl;
    return 0;
}

// output
// Items:   Cost:   Total Value: 
//    10       75             750
//     8      100             800
//    12       60             720
//    15       90            1350
// Grand Total: 3620
