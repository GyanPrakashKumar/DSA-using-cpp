#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if (!isPrime(num))
    {
        cout << "It's Prime Number.";
    } else {
        cout << "it's Not Prime number.";
    }
}