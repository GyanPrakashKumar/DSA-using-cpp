/*
A B C
D E F
G H I
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    char val = 'A';
    cout << "Enter number of rows:";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout << val << " ";
            val += 1;
        }
        cout << endl;
    }
    return 0;
}