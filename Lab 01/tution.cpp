#include "bits/stdc++.h"
using namespace std;

#define max 20
int ans = 0;

void printResult(int ans);

int main(void){

    double salary_01, distance_01;
    double salary_02, distance_02;

    cout << "Distance should be under 20 miles!";

    cout << "Tution 01: " << endl;
    cout << "Salary: ";     cin >> salary_01;
    cout << "Distance :";   cin >> distance_01;

    cout << "Tution 02: " << endl;
    cout << "Salary: ";     cin >> salary_02;
    cout << "Distance: ";   cin >> distance_02;

    if (salary_01 == salary_02)
    {
        if (distance_01 > distance_02)
        {
            if (distance_01 < max)
            {
                ans = 1;
            }
        }
        else
        {
            if (distance_02 < max)
            {
                ans = 2;
            }
            
        }
    }
    else if (salary_01 > salary_02)
    {
        if (distance_01 < max)
        {
            ans = 1;
        }
        else if (distance_02 < max)
        {
            ans = 2;
        }
    }
    else
    {
        if (distance_02 < max)
        {
            ans = 2;
        }
        else if (distance_01 < max)
        {
            ans = 1;
        }
    }
    
    printResult(ans);

    
    return 0;
}

void printResult(int ans){

    if (ans == 1)
    {
        cout << "Pick Tution 01" <<  endl;
    }
    else if (ans == 2)
    {
        cout << "Pick Tution 02" << endl;
    }
    else 
    {
        cout << "None of them" << endl;
    }
}