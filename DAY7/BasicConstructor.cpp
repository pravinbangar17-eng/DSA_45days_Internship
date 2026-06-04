#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student(string n, int r)   
    {
        cout << "Parameterized Constructor...\n";
        name = n;
        rollNo = r;            

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1("Pravin", 101);
    Student s2("yathart", 102);
    Student s3("mayur", 103);

    return 0;
}