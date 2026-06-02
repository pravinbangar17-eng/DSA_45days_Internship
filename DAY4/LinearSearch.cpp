#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    for(int i=0; i<5; i++)
    {
        if(arr[i] == key)
        {
           cout<<"number is found";
        }
    }
    return 0;
}