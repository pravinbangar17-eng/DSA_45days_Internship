#include <iostream>
using namespace std;

class Person
{
protected:
    string name = "Pravin";
};

class Student : public Person
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;
    s.display();

    return 0;
}  