#include <iostream>
using namespace std;
#define MAX 5

int main()
{
    int arr[MAX];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    int unique = 0;
    for (int i = 0; i < MAX; i++)
    {
        unique ^= arr[i];
    }
    cout << "The unique element is " << unique << endl;
}