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
    cout << "\nArray elements are" << ": \n";
    for (int i = 0; i < MAX; i++)
    {
        cout << "Element" << i+1 << " -- " << arr[i] << endl;
    }
}