#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int term1 = 0, term2 = 1;
    cout << term1 << " " << term2 << " ";
    for (int i = 0; i < n; i++)
    {
        int nTerm = term1 + term2;
        cout << nTerm << " ";
        term1 = term2;
        term2 = nTerm;
    }
    return 0;
}