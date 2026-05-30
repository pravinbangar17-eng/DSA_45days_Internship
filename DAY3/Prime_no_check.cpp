#include <iostream>
using namespace std;

int main() {

    int num, i, count = 1;

    cout << "Enter a number: ";
    cin >> num;

    for(i = 2; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        cout << "Prime Number";
    }
    else {
        cout << "Not Prime Number";
    }

    return 0;
}