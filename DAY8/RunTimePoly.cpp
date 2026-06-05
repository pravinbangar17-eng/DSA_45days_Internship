#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;

    void eat()
    {
        cout << "Eating..." << endl;
    }

    void sound()
    {
        cout << "Boww....." << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Boww....." << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Meow....." << endl;
    }
};

int main()
{
    Dog d1;
    Cat c1;

    d1.sound();
    c1.sound();

    return 0;
}