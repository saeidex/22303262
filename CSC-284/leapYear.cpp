#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int year, month, day;

public:
    Date(int a, int b, int c)
    {
        day = a;
        month = b;
        year = c;
    }

    friend bool isLeapYear(Date &a);
};

bool isLeapYear(Date &a)
{
    int x = a.year;

    if (x % 400 == 0)
        return true;
    else if (x % 100 == 0)
        return false;
    else if (x % 4 == 0)
        return true;

    return false;
}

int main()
{
    cout << "Enter date, month and year : " << endl;
    int x, y, z;
    cin >> x >> y >> z;
    Date a(x, y, z);

    cout << endl
         << endl;

    if (isLeapYear(a))
        cout << "This year is a Leap Year" << endl;
    else
        cout << "This year is not a Leap Year" << endl;

    return 0;
}
