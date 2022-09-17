/*
A B C 
B C D 
C D E 
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
        for (int j = 1; j <= row; j++)
        {
            char val = 'A' + i + j - 2;
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}