#include <iostream>
using namespace std;

int fib(int n);

int main(void)
{

    int n;

    cout << "Input the term of fibonacci series: ";
    cin >> n;
    cout << "The fibonacci series is: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << "\t";
    }

    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}