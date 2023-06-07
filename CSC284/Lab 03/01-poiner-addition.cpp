#include <iostream>
using namespace std;

int main(void) {

    int num__01;
    int num__02;
    int sum;

    cin >> num__01 >> num__02;

    int *p__01;
    int *p__02;

    p__01 = &num__01;
    p__02 = &num__02;

    sum = *p__01 + *p__02;

    cout << "Sum: " << sum << endl; 
    

    return 0;
}