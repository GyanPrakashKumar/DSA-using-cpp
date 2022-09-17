#include <iostream>
using namespace std;

int fact(int num)
{
    int ans = 1;
    while (num)
    {
        ans *= num;
        num--;
    }
    return ans;
}

int nCr(int n, int r)
{
    int nCr;
    nCr = fact(n) / (fact(n - r) * fact(r));
    return nCr;
}

int main()
{
    int n, r, ncr;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    ncr = nCr(n, r);
    cout << n << "C" << r << " : " << ncr;
}