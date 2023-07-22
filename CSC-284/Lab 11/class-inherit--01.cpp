#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
};

class Student: public Person
{
    string id;
public:
    void setInfo(string n, string i)
    {
        name = n;
        id = i;
    }
    void showInfo()
    {
        cout << "Name: " << name << endl;
        cout << "ID:   " << id << endl;
    }
};

int main(void)
{
    Student EK;

    EK.setInfo("Ebrahim Khalil","22303262");
    EK.showInfo();

    return 0;
}
