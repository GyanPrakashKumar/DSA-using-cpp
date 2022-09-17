/*
1111
 222
  33
   4
 */
#include <iostream>
using namespace std;

int main()
{
    int n, num = 1;
    cout << "Enter number of rows:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print (n-i) spaces
        for (int space = i - 1; space > 0; space--)
        {
            cout << " ";
        }

        // Print star (*)
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << num;
        }
        num++;
        cout << endl;
    }

    return 0;
}