/*
4321
4321
4321
4321
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows:";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++){
            cout << row - j + 1;
        }
        cout << endl;
    }
    return 0;
}