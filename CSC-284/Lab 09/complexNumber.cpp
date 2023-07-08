#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex(int a, string b)
    {
        real = a;
        img = stoi(b);
    }

    friend string add(Complex &a, Complex &b);
};

string add(Complex &a, Complex &b)
{
    int p;
    p = a.real + b.real;
    string x = to_string(p);
    x += '+';

    p = a.img + b.img;
    string m;
    m = to_string(p);
    x += m;
    x += 'i';

    return x;
}

int main()
{
    int m, c;
    string n, d;
    cin >> m >> n >> c >> d;
    Complex a(m, n), b(c, d);

    cout << endl
         << endl;
    cout << add(a, b);
    return 0;
}
