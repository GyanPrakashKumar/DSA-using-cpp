/*
   *
  **
 ***
****
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    
    // int row = 1;
    // while (row <= n)
    // {
    //     // Print (n-i) spaces
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }

    //     // Print star (*)
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

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
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}