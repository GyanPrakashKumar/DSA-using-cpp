#include <iostream>
using namespace std;
#define MAX 5

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    cout << "1st element: " << arr[0] << endl;
    cout << "1st element: " << arr[1] << endl;
    cout << "2nd element: " << arr[2] << endl;
    cout << "3rd element: " << arr[3] << endl;
    cout << "4th element: " << arr[4] << endl;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Element: "<< arr[i] << endl;
    }
    
}