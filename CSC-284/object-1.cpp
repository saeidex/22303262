#include <iostream>
using namespace std;

class Laptop
{
public:

    string brand;
    string model;
    string cpu;
    double main_price;
    float discount;

    double price()
    {
        return main_price*(1-discount);
    }
};

int main(void)
{
    Laptop laptop_1;
    laptop_1.brand = "HP";
    laptop_1.model = "V3";
    laptop_1.cpu = "i5-12700";
    laptop_1.main_price = 70000;
    laptop_1.discount = 0.05;

    cout << "Laptop 1" << endl
         << "--------" << endl
         << "Name: " << laptop_1.brand << " " << laptop_1.model << endl
         << "CPU: " << laptop_1.cpu << endl
         << "Price: " << laptop_1.price() << endl << endl;

    Laptop laptop_2;
    laptop_2.brand = "HP";
    laptop_2.model = "A9";
    laptop_2.cpu = "i3-12700";
    laptop_2.main_price = 50000;
    laptop_2.discount = 0.1;

    cout << "Laptop 2" << endl
         << "--------" << endl
         << "Name: " << laptop_2.brand << " " << laptop_2.model << endl
         << "CPU: " << laptop_2.cpu << endl
         << "Price: " << laptop_2.price() << endl << endl;

    Laptop laptop_3;
    laptop_3.brand = "HP";
    laptop_3.model = "B6";
    laptop_3.cpu = "i3-12700";
    laptop_3.main_price = 65000;
    laptop_3.discount = 0.1;

    cout << "Laptop 3" << endl
         << "--------" << endl
         << "Name: " << laptop_3.brand << " " << laptop_3.model << endl
         << "CPU: " << laptop_3.cpu << endl
         << "Price: " << laptop_3.price() << endl << endl;

    Laptop laptop_4;
    laptop_4.brand = "HP";
    laptop_4.model = "C4";
    laptop_4.cpu = "i9-12700";
    laptop_4.main_price = 120000;
    laptop_4.discount = 0.2;

    cout << "Laptop 4" << endl
         << "--------" << endl
         << "Name: " << laptop_4.brand << " " << laptop_4.model << endl
         << "CPU: " << laptop_4.cpu << endl
         << "Price: " << laptop_4.price() << endl << endl;



    return 0;
}
