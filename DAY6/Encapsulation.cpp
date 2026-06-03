#include<iostream>
using namespace std;
class bank
{
    private:
    int bankBalance = 5200;
    public:
    void getBalance()
    {
        cout<<"Bank Balance is : "<<bankBalance<<endl;
    }
    void deposite(int n)
    {
        bankBalance += n;
    }
};
int main ()
{
    bank b1;
    b1.getBalance();
    b1.deposite(500);
    b1.getBalance();
    return 0;
}