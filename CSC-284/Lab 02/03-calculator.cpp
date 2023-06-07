#include <iostream>
using namespace std;

int main(void)
{

    char op;
    double a, b;
    cout << "What opertion you want to do? (+, -, *, /): ";
    cin >> op;
    cout << "Enter two operatands: ";
    cin >> a >> b;

    switch (op)
    {
    case '+':
        cout << a << "+" << b << "=" << a + b << endl;
        break;
    case '-':
        cout << a << "-" << b << "=" << a - b << endl;
        break;
    case '*':
        cout << a << "*" << b << "=" << a * b << endl;
        break;
    case '/':
        cout << a << "/" << b << "=" << a / b << endl;
        break;

    default:
        cout << "Error! Operator is not correct." << endl;
        break;
    }

    return 0;
}
