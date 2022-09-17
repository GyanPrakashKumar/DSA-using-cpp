#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, flag = 0, i;
    cout << "Enter the Number: ";
    cin >> num;
    for (i = 0; i <= 30; i++)
    {
        if (pow(2, i) == num)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "yes, it is " << i << " power of 2." << endl;
    }
    else
    {
        cout << "No, it's not power of 2." << endl;
    }
}
