#include<iostream>
using namespace std;

int change(int x)
{
    x=100;
    cout<<"value of inside function: "<<x<<endl;
}
int main()
{
    int a=10;
    change(a);
    cout<<"value of a inside main:"<<a;
    return 0;
}