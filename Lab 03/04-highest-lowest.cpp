#include <iostream>
using namespace std;

void takeInput(int n, int arr[]);
void lowest(int n, int arr[]);
void highest(int n, int arr[]);

int main()
{

    int n;
    cin >> n;
    int arr[n];
    takeInput(n, arr);
    lowest(n, arr);
    highest(n, arr);

    return 0;
}

void takeInput(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void highest(int n, int arr[])
{
    int highest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > highest)
            highest = arr[i];
    }

    cout << "Highest: " << highest << endl;
}
void lowest(int n, int arr[])
{
    int lowest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < lowest)
            lowest = arr[i];
    }

    cout << "Lowest: " << lowest << endl;
}