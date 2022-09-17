/*
A A A 
B B B
C C C
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
        for (int j = 1; j <= row; j++) {
            char ptrn = 'A' + i - 1;
            cout << ptrn << " ";
        }
        cout << endl;
    }
    return 0;
}