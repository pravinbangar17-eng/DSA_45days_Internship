#include <iostream>
using namespace std;

class Car
{
private:
    void checkFuel()
    {
        cout << "Fuel Checked" << endl;
    }

    void checkBattery()
    {
        cout << "Battery Checked" << endl;
    }

public:
    void startCar()
    {
        checkFuel();
        checkBattery();
        cout << "Car Started" << endl;
    }
};

int main()
{
    Car c1;
    c1.startCar();

    return 0;
}