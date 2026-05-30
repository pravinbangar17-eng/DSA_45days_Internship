#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int* ptr=&a;
    cout<<"afress of a:"<<ptr<<endl;
    cout<<"value at adress ptr:"<<*ptr;

    return 0;
}