#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student()
    {
        cout << "Non-Parameterized Constructor...\n";
        cout << "Memory address of this pointer: " << this << endl;
    }
};

int main()
{
    Student s1;

    cout << "Memory address of s1 object: " << &s1 << endl;

    return 0;
}