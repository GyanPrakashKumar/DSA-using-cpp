/*
   1
  23
 456
78910
 */
#include <iostream>
using namespace std;

int main()
{
    int n, num = 1;
    cout << "Enter number of rows:";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // Print (n-row) spaces
        for (int space = n - row; space > 0; space--)
        {
            cout << " ";
        }

        // Print star (*)
        for (int j = 1; j <= row; j++)
        {
            cout << num;
        }
            num++;
        cout << endl;
    }

    return 0;
}