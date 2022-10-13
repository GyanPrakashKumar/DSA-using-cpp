#include <iostream>
using namespace std;
#define MAX 5

int main()
{
    int arr[MAX];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
        count = 0;
    }
}
