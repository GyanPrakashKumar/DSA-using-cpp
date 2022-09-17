/*
using another method:

A B C D 
B C D E
C D E F
D E F G
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}