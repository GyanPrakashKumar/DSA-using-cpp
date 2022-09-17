#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows:";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j <= row; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}