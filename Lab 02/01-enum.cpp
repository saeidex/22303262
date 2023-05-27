#include <iostream>
using namespace std;

enum week { Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday};

int main (void)
{
    week today;
    today = Saturday;

    cout << today << endl;

    return 0;
}
