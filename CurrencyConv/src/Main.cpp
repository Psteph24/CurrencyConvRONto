#include<iostream>
#include<string>
using namespace std;

//currency converter to convert RON to EUR,USD,GBP

int main()
{
	double ron;
	string currency;

	cout << "\n=============CURRENCY CONVERTER================";
	cout << "\nEnter the RON amount you want to convert: ";
	cin >> ron;

	double euro = ron * 0.20;
	double usd = ron * 0.22;
	double gbp = ron * 0.18;
	
	
		cout << "\n\nEnter the currency you want to convert to: ";
		
			cin >> currency;
			
			
		 if (currency == "EUR")
			cout << "The amount of EUR is " << euro << "\n\n\n\n\n\n";
		else if (currency == "USD")
			cout << "The amount of USD is " << usd << "\n\n\n\n\n\n";
		else if (currency == "GBP")
			cout << "The amount of GBP is " << gbp << "\n\n\n\n\n\n";
		else cout << "You have enetered an invalid input. Choose : EUR,USD,GBP.\n\n\n\n\n\n";
	
		return 0;
}