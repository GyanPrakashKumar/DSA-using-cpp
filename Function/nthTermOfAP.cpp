#include <iostream>
using namespace std;

int nthTerm(int a, int n, int d)
{
    /*
    nth term of the A.P. is calculated by the formula,
    nthTerm = a + (n − 1) d
    where, a = first term of A.P.
    n = total number of terms in A.P.
    d = common difference between two consecutive terms of A.P.
    */
    return (a + (n - 1) * d);
}

int main(){
    int a, n, d, An;
    cout << "First term of A.P: ";
    cin >> a;
    cout << "Which number of terms in A.P: ";
    cin >> n;
    cout << "Common Difference between two consecutive terms of A.P: ";
    cin >> d;
    An = nthTerm(a, n, d);
    cout << n << "th Term of AP : " << An;
}