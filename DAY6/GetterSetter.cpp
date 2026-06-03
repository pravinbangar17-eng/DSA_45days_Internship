#include <iostream>
using namespace std;

class student
{
private:
    string name;
    string email;
    int age;

public:
    void getData()
    {
        cout << name << endl;
        cout << email << endl;
        cout << age << endl;
    }
    void setData()
    {
        name = "Pravin";
        email = "pravin12@gmaol.com";
        age = 21;
    }
};
int main()
{
    student s1;
    s1.setData();
    s1.getData();
    return 0;
}