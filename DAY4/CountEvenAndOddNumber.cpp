#include <iostream>
using namespace std;
int main() 
{
    int arr[6] = {1, 2, 3, 4, 5 ,6 };
    int evenCount = 0;
    int oddCount = 0;
    for(int i=0; i<6; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout << "even elements: " << evenCount << endl;
    cout << "odd elements: " << oddCount << endl;
    return 0;
}