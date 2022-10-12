#include <iostream>
using namespace std;
void reverse(int arr[], int size) {
    int s = 0, e = size - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    

}
int main()
{
    int arr[6], key;
    cout << "Enter 6 elements of array:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Reverse of array:\n";
    reverse(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}