#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;
    float cg;

public:
    void setId(int a)
    {
        id = a;
    }
    void setName(string a)
    {
        name = a;
    }
    void setCg(float a)
    {
        cg = a;
    }

    void getDetails()
    {
        cout << "ID: " << id << endl
             << "Name: " << name << endl
             << "CGPA: " << cg << endl;
    }
};

int main(void)
{
    Student s1;
    s1.setId(22303262);
    s1.setName("Ebrahim Khalil");
    s1.setCg(3.83);
    s1.getDetails();

    return 0;
}
