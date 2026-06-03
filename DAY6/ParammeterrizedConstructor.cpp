#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;

    student(string n, int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    student s1("Pravin", 21);
    cout << "the name is:" << s1.name << endl;
    cout << "the age is:" << s1.age << endl;

    return 0;
}