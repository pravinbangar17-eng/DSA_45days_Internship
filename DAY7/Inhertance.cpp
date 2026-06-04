#include<iostream>
using namespace std;

class Animal
{
    public:
    string name;
    int age;

    void eat()
    {
        cout << "Animal is eating...\n";
    }
    void sleep()
    {
        cout<<"Animal is sleeping...\n";
    }
};
 int main()
    {
        Animal a1;
        a1.name = "kutra";
        a1.age = 101;
    
        cout << "Name: " << a1.name << endl;
        cout << "age: " << a1.age << endl;
    
        a1.eat();
        a1.sleep();

    
        return 0;
    }