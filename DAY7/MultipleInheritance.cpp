#include <iostream>
using namespace std;

// First Base Class
class Father
{
public:
    void car()
    {
        cout << "Father has a car." << endl;
    }
};

class Mother
{
public:
    void jewelry()
    {
        cout << "Mother has jewelry." << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void bike()
    {
        cout << "Child has a bike." << endl;
    }
};

int main()
{
    Child c;

    c.car();
    c.jewelry();
    c.bike();

    return 0;
}