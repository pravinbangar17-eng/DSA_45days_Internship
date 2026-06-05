#include<iostream>
using namespace std;

class student{
public:
string name;
int age;

student()
{
    cout << "default constructor called.....\n";
}
student(string n,int a)
{
    cout << "parameterized constructor called...\n";
    name =n;
    age=a;
}
};

int main()
{
    student s1;
student s2("Pravin",07);
    return 0; 
}
