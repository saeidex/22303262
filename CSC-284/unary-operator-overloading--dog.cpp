#include <iostream>

using namespace std;

class Dog
{
public:
    int excitementLevel = 0;

    Dog() {}

    Dog operator++(int)
    {
        if (excitementLevel < 100)
        {
            excitementLevel++;
        }
        else
        {
            cerr << "Excitement level cannot exceed 100!" << endl;
        }
        return *this;
    }

    Dog operator--(int)
    {
        if (excitementLevel > 0)
        {
            excitementLevel--;
        }
        else
        {
            cerr << "Excitement level cannot be less than 0!" << endl;
        }
        return *this;
    }
};

int main()
{
    Dog max;
    cout << "Max's excitement level is: " << max.excitementLevel << endl;

    max++;
    cout << "Max's excitement level is now: " << max.excitementLevel << endl;

    max--;
    cout << "Max's excitement level is now: " << max.excitementLevel << endl;

    max--;
    cout << "Max's excitement level is now: " << max.excitementLevel << endl;

    return 0;
}
