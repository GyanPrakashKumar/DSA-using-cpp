/*
    ****
     ***
      **
       *
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
        for (int space = i - 1; space > 0; space--)
        {
            cout << " ";
        }

        // Print star (*)
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}