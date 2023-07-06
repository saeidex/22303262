#include <iostream>
using namespace std;


class AddAmount
{
    double amount = 100.0;

public:
    AddAmount()
    {
        amount += 0;
    }
    AddAmount(double a)
    {
        amount += a;
    }
    void printTotal()
    {
        cout << "Total Amount: $" << amount << endl;
    }
    void checkTotal()
    {
        if (amount > 1000)
        {
            cout << "Piggie Bank is full! You can't add more money." << endl;
        }
        else
        {
            cout << "Piggie Bank is not full yet." << endl;
        }
    }
};


int main(void)
{
    AddAmount a, b(2000);

    a.printTotal();
    a.checkTotal();


    cout << endl;


    b.printTotal();
    b.checkTotal();


    return 0;
}
