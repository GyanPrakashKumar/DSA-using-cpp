#include <iostream>
using namespace std;

void oddEven(int num)
{
    if (!(num & 1))
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}

int main()
{
    int num, ans;
    cout << "Enter Number: ";
    cin >> num;
    oddEven(num);
    // cout << ans;
}