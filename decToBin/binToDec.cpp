#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i = 0, ans = 0, dig;
    cout << "Enter Binary number: ";
    cin >> n;
    while (n != 0)
    {
        dig = n % 10;
        if (dig == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
        cout << ans;
    return 0;
}
