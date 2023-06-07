#include <iostream>
using namespace std;

void input__array (int length, int arr[]);
void print__array (int length, int arr[]);

int main (void)
{
    int l;
    cout << "Enter the length of the array: ";
    cin >> l;

    int arr[l];

    input__array (l, arr);
    print__array (l, arr);


    return 0;
}

void input__array(int length, int arr[])
{
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
}

void print__array (int length, int arr[])
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
}
