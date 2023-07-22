#include <iostream>
using namespace std;

class Shape
{
protected:
    double width;
    double height;
};

class Rectangle: public Shape
{
public:
    void area(double w, double h)
    {
        width = w;
        height = h;

        cout << "Area: " << w*h << " Square Unit." << endl;
    }

};

int main(void)
{
    Rectangle r;
    r.area(10, 4);

    return 0;
}
