#include <iostream>

using namespace std;

void Working(int hour);

int main()
{
    int hour;

    cin >> hour;

    Working(hour);
}

void Working(int hour)
{
    (hour >= 9 && hour < 12) || (hour > 13 && hour <= 16) ? cout << "working" : cout << "leisure";
}