#include<iostream>
using namespace std;

int main()
{
	int rs[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int amount, i, temp;
	
	cout << "\nEnter the Amount =  ";
	cin >> amount;
	
	temp = amount;
	
	for(i = 0; i < 10; i++)
  	{
		cout <<"Notes of " << rs[i] << ": " << temp / rs[i] << endl;
		temp = temp % rs[i];
  	}
		
 	return 0;
}