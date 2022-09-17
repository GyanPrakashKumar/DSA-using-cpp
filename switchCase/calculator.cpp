#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char ch;
    cout << "Enter num1 = ";
    cin >> num1;
    cout << "Enter num2 = ";
    cin >> num2;
    cout << "Enter \na for Add\nb for Subtract\nc for Multiplication\nd for Division\n ===--->> ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << num1 + num2;
        break;
    case 'b':
        cout << num1 - num2;
        break;
    case 'c':
        cout << num1 * num2;
        break;
    case 'd':
        cout << num1 / num2;
        break;
    default:
        cout << "Uh-oh! re-run";
    }
}