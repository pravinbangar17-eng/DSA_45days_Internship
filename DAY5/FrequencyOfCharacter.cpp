#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "";
    char ch = 'A';
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    cout << "frequency of cha" << ch << "is:" << count;

    return 0;
}