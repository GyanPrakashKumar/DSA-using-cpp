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
    cout << "\n Duplicate elements are: \n";
    for (int i = 0; i < MAX; i++)
    {
        for (j = i + 1; j < MAX; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << "\t";
            }
        }
    }    
}