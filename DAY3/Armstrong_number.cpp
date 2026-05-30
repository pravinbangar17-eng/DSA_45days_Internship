#include <iostream>
using namespace std;

int main() {

    int num, rem, sum = 0, original;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if(original == sum) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not Armstrong Number";
    }

    return 0;
}