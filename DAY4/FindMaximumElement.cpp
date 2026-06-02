#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 9, 2, 7, 1};
    int max = arr[0];
    for(int i=1; i<5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum element in the array: " << max << endl;
    return 0;
}