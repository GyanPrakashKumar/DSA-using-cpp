/*
Pattern 12: 
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
[**without using count variable]
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
        for (int j = i; j <= i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}


