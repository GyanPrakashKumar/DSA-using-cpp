#include <iostream>
using namespace std;
#define MAX 5

int main()
{
    int arr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nArray elements are: \n";
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << "\t";
    }
    int fst = arr[0], sec = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (fst < arr[i])
        {
            sec = fst;
            fst = arr[i];
        }
        if (fst > arr[i] && sec < arr[i])
        {
            sec = arr[i];
        }
        
    }
    cout << "\n\nFirst Highst Elem in arr[5] = " << fst;
    cout << "\nSecond Highst Elem in arr[5] = " << sec;
}