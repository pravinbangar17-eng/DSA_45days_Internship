#include<iostream>
using namespace std;

class student
{
    public:
    string name ="Pravin";
    int age =21;

    void show()
    {
        cout << "name; " << name << endl;
        cout << "age:" << age << endl;
    
    }
};
int main()
{
  student s1;
  student s2(s1);
  s2.show();
    return 0;  
}