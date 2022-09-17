#include<iostream>
using namespace std;

int power2(int exp) {
    int ans = 1;
    for (int i = 1; i <= exp; i++)
    {
        ans *= 2;
    }
    return ans;
}
int main()
{
	int exponent, pow;
	
	cout << "\nEnter what power of 2 =  ";
	cin >> exponent;
    pow = power2(exponent);
    cout << pow;
    return 0;
}