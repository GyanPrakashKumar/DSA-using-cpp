/*
   1
  121
 12321
1234321
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
        // Print (n-i) spaces
        for (int space = n - i; space > 0; space--)
        {
            cout << " ";
        }

        // Print star (j)
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}