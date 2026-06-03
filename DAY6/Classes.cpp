#include <iostream>
using namespace std;

class student
{
public:
    string name;
    string email;
    int age;
};
int main()
{
    student s1;
    s1.name = "pravin";
    s1.email = "pravinbangar17@gmail.com";
    s1.age = 21;
    cout << s1.name<<endl<< s1.email<<endl << s1.age;
    return 0;
}