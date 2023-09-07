// a sample program to introduce objects as function arguments
#include <bits/stdc++.h>

using namespace std;

class time
{
    int hours;
    int minutes;

public:
    void getTime(int hour, int minute)
    {
        hours = hour;
        minutes = minute;
    }
    void showTime()
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
    void sum(time, time); /// declaration with objects as arguments
};

void time::sum(time firstTime, time secondTime)
{
    minutes = firstTime.minutes + secondTime.minutes;
    hours = minutes / 60;
    minutes %= 60;
    hours += firstTime.hours + secondTime.hours;
}

int main()
{
    time one, two, three;
    one.getTime(2, 45);
    two.getTime(3, 30);

    three.sum(one, two);

    cout << "First Time : " << endl;
    one.showTime();
    cout << "Second Time : " << endl;
    two.showTime();
    cout << "Third Time : " << endl;
    three.showTime();
}

// Output
// First Time :
// 2 hours and 45 minutes
// Second Time :
// 3 hours and 30 minutes
// Third Time :
// 6 hours and 15 minutes