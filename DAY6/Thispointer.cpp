#include<iostream>
using namespace std;

class student
{
public:
string name;
int age ;

student(string name ,int age)
{
    this->name = name;
    this->age = age;
}
void display()
{
    cout<<"name;"<<name<<endl;
    cout<<"age;"<<age;

}
void show(){
    cout<<this;
}
};
int main()
{
    student s1("Pravin", 21);
    s1.display();
    
    return 0;
}
