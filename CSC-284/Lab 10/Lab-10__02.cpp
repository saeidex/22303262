#include <iostream>
using namespace std;
#define PI 3.14159


class Frnd;
class Triangle
{
protected:
    double base;
    double height;

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
public:
    Circle(double a)
    {
        radius = a;
    }
    friend class Frnd;
};

class Frnd
{
    double tBase;
    double tHeight;
    double cRadius;
public:
    friend class Triangle;
    friend class Circle;

    Frnd(Triangle a, Circle b)
    {
        tBase = a.base;
        tHeight = a.height;
        cRadius = b.radius;
    }
    void printTriangleArea()
    {
        double tArea;
        tArea = 0.5 * tBase * tHeight;

        cout << "Triangle Area: " << tArea << endl;
    }
    void printCircleArea()
    {
        double cArea;
        cArea = PI * cRadius * cRadius;

        cout << "Circle Area: " << cArea << endl;
    }

};



int main(void)
{
    Triangle m(5, 10);
    Circle c(5);
    Frnd f(m, c);

    f.printTriangleArea();
    f.printCircleArea();

    return 0;
}
