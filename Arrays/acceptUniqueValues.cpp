#include <iostream>
using namespace std;
#define MAX 5

int main()
{
    int arr[MAX];

    for (int i = 0; i < MAX; i++)
    {
    R:
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "This value is already exist. Re-enter new value.\n";
                goto R;
            }
        }
    }
    cout << "\nArray elements are: \n";
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
}