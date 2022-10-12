#include <iostream>
#include <math.h>
using namespace std;
#define MAX 6

int swapAlternate(int num[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(num[i], num[i + 1]);
        }
    }
}

int main()
{
    int arr[MAX] = {1, 2, 3, 4, 6, 7};
    // i/p =  [ (1 2) (3 4) (6 7) ]
    swapAlternate(arr, MAX);
    // o/p = [ (2 1) (4 3) (7 6) ]
    cout << "[ ";
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}
