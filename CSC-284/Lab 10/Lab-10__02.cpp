#include <iostream>
using namespace std;
#define PI 3.14159


class Frnd;
class Triangle
{
protected:
    double base;
    double height;
    double area;

public:
    Triangle(double a, double b)
    {
        base = a;
        height = b;
    }

    friend class Frnd;
};

class Circle
{
protected:
    double radius;
    double area;
public:
    Circle(double a)
    {
        radius = a;
    }
    friend class Frnd;
};

class Frnd
{
public:

    void printTriangleArea(Triangle &a)
    {
        a.area = 0.5 * a.base * a.height;
        cout << "Triangle Area: " << a.area << endl;
    }
    void printCircleArea(Circle &b)
    {
        b.area = PI * b.radius * b.radius;
        cout << "Circle Area: " << b.area << endl;
    }

};


int main(void)
{
    Triangle m(5, 10);
    Circle c(5);
    Frnd f;

    f.printTriangleArea(m);
    f.printCircleArea(c);

    return 0;
}
