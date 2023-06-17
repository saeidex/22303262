#include <iostream>
using namespace std;

class Cart
{
private:
    string customerName;
    int productId;
    int productQuantities;
    double pricePerUnit;
    double price;

public:
    void getInfo()
    {
        cout << "Input Data below: " << endl;
        cout << "Customer Name: ";
        cin >> customerName;
        cout << "Product ID: ";
        cin >> productId;
        cout << "Product Quantities: ";
        cin >> productQuantities;
        cout << "Price Per Unit: ";
        cin >> pricePerUnit;
        cout << "Thank You." << endl;
    }
    double totalAmount()
    {
        return price = productQuantities * pricePerUnit;
    }
    void display()
    {
        cout << productId << "\t\t" << productQuantities << "*" << pricePerUnit << "\t\t" << pricePerUnit * productQuantities << endl;
        cout << endl;
        cout << "----------------------------------" << endl;
        cout << "Total Payable Amount: " << totalAmount() << " TK" << endl
             << endl
             << endl;
    }
};

int main(void)
{
    int t;
    cout << "How many cart do you want to add? ans: ";
    cin >> t;

    int n;
    for (n=1; n<t; n++)
    {
        Cart c;

        cout << "Cart-" << n << endl;
        cout << "-------" << endl;

        c.getInfo();
        c.display();
    }

    return 0;
}
