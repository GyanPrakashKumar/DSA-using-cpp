#include <iostream>
using namespace std;
#define MAX 6

int main()
{
    int arr[MAX], sum = 0;
    cout << "Enter 6 elements:\n";
    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nArray of elements are: \n";
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << "\nSum of 6 elements: " << sum;
}