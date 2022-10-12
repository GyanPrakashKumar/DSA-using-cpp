#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10], key;
    cout << "Enter 10 elements of array:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> key;
    int found = search(arr, 10, key);
    if (found)
    {
        cout << "Element present in given array";
    }
    else
    {
        cout << "Element not present in given array";
    }
}