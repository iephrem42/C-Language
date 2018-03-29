/*
		File Name: lab3.cpp	
		Author: Isaac Ephrem	
		Date: March 29, 2016
		Purpose: Writing a program that calculates the price, quantity, taxes, and total of apples bought
*/

#include <iostream>
using namespace std;
int main()
{
	float pricexquantity;
	float apple;
	int quantity;
	float tax;
	float total;
	
	cout << "What is the price of one apple in US dollars?" << endl << "$  ";
	cin >> apple;
	
	cout << "How many apples did you buy?" << endl << "QUANTITY  ";
	cin >> quantity;
	
	pricexquantity = apple * quantity;
	tax = 0.0975 * pricexquantity;
	total = tax + pricexquantity;
	
	cout << "PRICE PER APPLE:  	   $" << apple << endl;
	cout << "QUANTITY:                  " << quantity << " APPLES"<< endl;
	cout << "PRICE x QUANTITY: 	   $" << pricexquantity << endl;
	cout << "TAX:			   $" << tax << endl;
	cout << "Total:			   $" << total << endl;
	
	return 0;
}
	
