#include<iostream>
using namespace std;

int main() {
    int n, bit = 0;
    cout << "Enter Number (n): ";
    cin >> n;
    while(n)
    {
        bit += (n & 1);
        n = n >> 1;
    }
    cout << "Number of set bits: " << bit;
    return 0;
}