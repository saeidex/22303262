#include <iostream>
using namespace std;

union student
{
    int id;
    float grade;
    bool gender;
};

int main(void)
{
    student s;

    s.id = 22303262;
    cout << s.id << endl;

    s.grade = 3.83;
    cout << s.grade << endl;

    s.gender = true;
    if (s.gender == true)
    {
        cout << "Male" << endl;
    }
    else
    {
        cout << "Female" << endl;
    }

    return 0;
}