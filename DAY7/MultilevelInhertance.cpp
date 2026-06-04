#include <iostream>
using namespace std;

// Base Class
class Grandfather
{
public:
    void house()
    {
        cout << "Grandfather has a house." << endl;
    }
};

class Father : public Grandfather
{
public:
    void car()
    {
        cout << "Father has a car." << endl;
    }
};

class Son : public Father
{
public:
    void bike()
    {
        cout << "Son has a bike." << endl;
    }
};

int main()
{
    Son s;

    s.house();
    s.car();
    s.bike();

    return 0;
}