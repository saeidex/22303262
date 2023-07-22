#include <iostream>
using namespace std;

class Vector
{
    int x;
    int y;
    int z;

public:
    Vector(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    friend void dotProduct(Vector &a, Vector &b)
    {
        int i = a.x + b.x;
        int j = a.y + b.y;
        int k = a.z + b.z;

        cout << "(" << i  << "i" << ")+" << "(" << j << "j" << ")+" << "(" << k << "k" << ")" << endl;
    }
};

int main(void)
{
    Vector m(5, 5, 3), n(2, -54, 6);
    dotProduct(m, n);

    return 0;
}
