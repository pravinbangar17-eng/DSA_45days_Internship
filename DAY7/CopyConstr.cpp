#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student()
    {
    }

    Student(Student &a)
    {
        cout << "Copy Constructor Called\n";
        this->name = a.name;
        this->rollNo = a.rollNo;
    }
};

int main()
{
    Student s1;

    s1.name = "Pravin";
    s1.rollNo = 36;

    cout << "s1 Name: " << s1.name << endl;
    cout << "s1 Roll No: " << s1.rollNo << endl;

    Student s2(s1);

    cout << "s2 Name: " << s2.name << endl;
    cout << "s2 Roll No: " << s2.rollNo << endl;

    return 0;
}