#include <iostream>
using namespace std;

int main()
{
    int rs;
    cout << "Enter Your Amount: ";
    cin >> rs;
	int _2000r, _500r, _200r, _100, _20r, _10, _5r, coins;
	_2000r = _500r = _200r = _100 = _20r = _10 = _5r = coins = 0; 

    // this problem is solved using array and for-loop in ./Arrays folder
    
  	if (rs > 2000)
	{
  		_2000r = rs / 2000;
  		rs = rs - (_2000r * 2000);	
  	} 
	if (rs >= 500)  	
	{
  		_500r = rs / 500;
  		rs = rs - (_500r * 500);	
  	}
	if (rs >= 200)  	
	{
  		_200r = rs / 200;
  		rs = rs - (_200r * 200);	
  	} 
	if (rs >= 100)  	
	{
  		_100 = rs / 100;
  		rs = rs - (_100 * 100); 	
  	} 
	if (rs >= 20)  	
	{
  		_20r = rs / 20;
  		rs = rs - (_20r * 20); 	
  	} 
	if (rs >= 10)  	
	{
  		_10 = rs / 10;
  		rs = rs - (_10 * 10); 	
  	} 
	if (rs >= 5)  	
	{
  		_5r = rs / 5;
  		rs = rs - (_5r * 5); 	
  	} 
	if (rs >= 2)  	
	{
	   	coins = rs;
	}
	cout << "\nNotes present in the Cash are: \n";
	cout << "\nNote of 2000 = " << _2000r; 
	cout << "\nNote of 500 = " << _500r; 
	cout << "\nNote of 200 = " << _200r; 
	cout << "\nNote of 100 = " << _100; 
	cout << "\nNote of 20 = " << _20r; 
	cout << "\nCoin of 10 = " << _10; 
	cout << "\nCoin of 5 = " << _5r; 
	cout << "\nRest Coins are = " << coins; 
			
 	return 0;
}