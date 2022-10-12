#include <iostream>
#include <math.h>
using namespace std;
int Twopow(int num);
int powTwo(int num);

int powTwo(int n) {
    int bit = 0;
    while (n)
    {
        bit += (n & 1);
        n = n >> 1;
    }
    if (bit > 1)
    {
        cout << "No, it's not power of 2." << endl;
    }
    else
    {
        cout << "yes, it is power of 2." << endl;
    }
}
int Twopow(int num) {
    int flag = 0, i;
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

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    cout << "Method 1: \n";
    cout << Twopow(num) << endl;
    cout << "Method 2: \n";
    cout << powTwo(num);
}
