#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    Student()
    {
        cout << "constructor called...\n";
    }
    ~Student()
    {
        cout<<"destructor called...\n";
    }
};

int main()
{
    Student s1;
    s1.name = "Pravin";
    cout <<"Name: "<< s1.name << endl;

    return 0;
}