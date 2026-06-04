#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
};

int main()
{
    Student s1;
    s1.name = "Pravin";

    cout << s1.name << endl;

    Student s2(s1);   
    cout << s2.name << endl;

    return 0;
}