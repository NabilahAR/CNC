#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std ;
int main ()
{
	int student = 0;
	string matric = "1726450";
	int input = 0;
	int form = 0;
	int exchange = 0;
	
	
	cout << "\t\tIIUM Mobility Programme\n";
	cout << "\t\t------------------------\n\n\n";
	cout << "Welcome to IIUM Mobility Programme Website\n\n";
	cout << "Nurul Nabilah binti Abd Rahman\t\t";
	cout << matric;
	cout << "\n\n";
	
	if (exchange = 1){
		
		cout << "Nurul Nabilah binti Abd Rahman have joined an exchange student programme\n\n";
	}
	else {
		
		cout << "Nurul Nabilah binti Abd Rahman have not joined any exchange programme\n\n";
	}
	
	cout << "Fill up form ? 1: Yes, 2: No\t\t" ;
	cin >> input;
	
	if (input =1){
		form++;
	}
	else{
		cout << "You do not want apply the exchange programme";
	}
	
	if (form >1)
	{
		exchange++;
	}
	else {
		cout << "Your dot have any exchange form that had been applied";
	}
	
	
	
	return 0;
}
