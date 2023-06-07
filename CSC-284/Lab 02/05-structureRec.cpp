#include <iostream>
using namespace std;

struct rec {
    double side__01;
    double side__02;
    double rec__area;
    double rec__perimeter;
};

int main (void) {

    rec r;

    cout << "Input the sides of the rectangle: ";
    cin >> r.side__01 >> r.side__02;

    r.rec__area = r.side__01 * r.side__02;
    r.rec__perimeter = 2 * (r.side__01 + r.side__02);

    cout << "Side 01: " << r.side__01 << endl
         << "Side 02: " << r.side__02 << endl
         << "Area: " << r.rec__area << endl
         << "Perimeter: " << r.rec__perimeter << endl;

    return 0;
}