#include <iostream>
using namespace std;

void fibbo(int num)
{
    int fst = 0, sec = 1, nterm;
    cout << fst << " " << sec << " ";
    for (int i = 0; i < num - 2; i++)
    {
        nterm = fst + sec;
        cout << nterm << " ";
        fst = sec;
        sec = nterm;
    }
}

int main()
{
    int n, ans;
    cout << "Enter Number: ";
    cin >> n;
    fibbo(n);
    
}
