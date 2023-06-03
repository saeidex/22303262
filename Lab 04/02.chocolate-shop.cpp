#include <iostream>
using namespace std;

void added(int *n, int x);
void sold(int *n, int x);

int main(void)
{
    int n = 0;
    int a;
    int s;

    cout << "\t\tChocolate Shop" << endl
         << "\t\t--------------" << endl;

    cout << "Input for adding: ";
    cin >> a;
    added(&n, a);
    cout << "Success!" << endl;
    cout << "Total chocolates: " << n << "\n\n";

    cout << "Input sold: ";
    cin >> s;
    sold(&n, s);
    cout << "Success!" << endl;
    cout << "Total chocolates: " << n << "\n\n";

    return 0;
}

void added(int *n, int x)
{
    *n = (*n) + x;
}
void sold(int *n, int x)
{
    *n = (*n) - x;
}