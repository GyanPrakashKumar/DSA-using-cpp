#include <iostream>
using namespace std;
#define MAX 5
/* 
* declare array with 10 elements +  runtime input & display with sum & avg 
*/
int main()
{
    int arr[MAX], sum = 0, avg;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
   for (int i = 0; i < MAX; i++)
    {
        cout << "Element" << i+1 << " -- " << arr[i] << endl;
        sum += arr[i];
    }

    cout << "Sum of all arr[5] = " << sum << endl;
    cout << "Average of all arr[5] = " << (float)sum / MAX;

}