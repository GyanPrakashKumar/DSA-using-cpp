/*
A 
B C
C D E
D E F G
E F G H I
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch <<" ";
        }
        cout << endl;
    }
    return 0;
}