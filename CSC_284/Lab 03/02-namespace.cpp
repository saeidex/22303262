#include <iostream>
using namespace std;

namespace Math
{
    void addition(int a, int b)
    {
        cout << "Addition: " << a + b << endl;
    }
    void subtraction(int a, int b)
    {
        cout << "Subtraction: " << a - b << endl;
    }
}
namespace Physics
{
    void force(double a, double m, double s) {
        cout << "Force: " << m*a << endl;
    }
    void power(double a, double m, double s) {
        cout << "Power: " << a*m*s << endl;
    }
}

int main(void)
{
    int a;
    int b;
    int x;
    int y;
    int z;

    cout << "Enter two integer: ";
    cin >> a >> b;
    cout << "Enter two double: ";
    cin >> x >> y >> z;

    Math::addition(a, b);
    Math::subtraction(a, b);
    Physics::force(x, y, z);
    Physics::power(x, y, z);

    return 0;
}