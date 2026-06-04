#include <iostream>
using namespace std;

class Father
{
public:
    void house()
    {
        cout << "Father has a house." << endl;
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

class Daughter : public Father
{
public:
    void scooty()
    {
        cout << "Daughter has a scooty." << endl;
    }
};

int main()
{
    Son s;
    Daughter d;

    s.house();
    s.bike();

    d.house();
    d.scooty();

    return 0;
}