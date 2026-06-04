#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
public:
    Student(string name, int rollNo)
    {
        cout << "parameterized constructor..\n";
        this->name = name;
        this->rollNo = rollNo;

         cout << "Name inside constructor:" << name << endl;
        cout << "Roll No inside constructoe:" << rollNo << endl;
    }

    void show()
    {
        cout << "Name inside constructor: " << name << endl;
        cout << "Roll No inside constructor: " << rollNo << endl;
    }
};

int main()
{
    Student s1("pravin", 101);
    s1.show();
    return 0;
}