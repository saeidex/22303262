#include <iostream>
using namespace std;

int main(void) {

    double f1, f2, f3, f4;
    double price;
    double slices;
    
    cout << endl << endl << "Enter the price of the pizza: ";
    cin >> price;

    cout<<"Enter the number of taken slice of-" << endl;
    cout <<"Friend 01: ";   cin >> f1;
    cout <<"Friend 02: ";   cin >> f2;
    cout <<"Friend 03: ";   cin >> f3;
    cout <<"Friend 04: ";   cin >> f4;
    
    slices = f1 + f2 + f3 + f4;
    price /= slices;

    cout << endl << "Payable ammount of-" << endl;
    cout << "Friend 01: "<< f1*price << endl;
    cout << "Friend 02: "<< f2*price << endl;
    cout << "Friend 03: "<< f3*price << endl;
    cout << "Friend 04: "<< f4*price << endl;
    
    return 0;
}