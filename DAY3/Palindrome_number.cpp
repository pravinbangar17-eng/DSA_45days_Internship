#include <iostream>
using namespace std;

int main() {

    int num, rem, reverse = 0, original;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
if(original == reverse) {
        cout << "Palindrome Number";
    }
    else {
        cout << "Not Palindrome";
    }
         
    return 0;
}