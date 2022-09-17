#include <iostream>
using namespace std;
#define MAX 5

int main()
{
    int arr[MAX], j = 0;

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
    cout << "\nArray elements are: \n";
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
        arr[j++] = arr[MAX];
    }
    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << "\t";
    }    
}