#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, prod = 1;
    cout << "Enter limit (n): ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        prod *= i;
    }
    cout << "Sum upto " << n << ": " << sum << endl;
    cout << "Product upto " << n << ": " << prod;
    return 0;
}