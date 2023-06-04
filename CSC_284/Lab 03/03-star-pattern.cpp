#include <iostream>
using namespace std;

void triangle(int n);
void rev__triangle(int n);

int main(void)
{

    int n;
    cin >> n;

    triangle(n);
    cout << endl << endl;
    rev__triangle(n);

    return 0;
}

void triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void rev__triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}