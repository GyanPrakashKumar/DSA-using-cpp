/*
Pattern 11: 
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
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
        for (int j = i; j <= row; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}


