#include<iostream>
using namespace std;

// Addition Function
int add(int a, int b)
{
    return a + b;
}

// Subtraction Function
int sub(int a, int b)
{
    return a - b;
}

// Multiplication Function
int multi(int a, int b)
{
    return a * b;
}

// Division Function
float divi(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << add(a, b) << endl;
    cout << "Subtraction = " << sub(a, b) << endl;
    cout << "Multiplication = " << multi(a, b) << endl;
    cout << "Division = " << divi(a, b) << endl;

    return 0;
}