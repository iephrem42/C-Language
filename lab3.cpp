/*
		File Name: lab3.cpp	
		Author: Isaac Ephrem	
		Date: March 29, 2018
		Purpose: Writing a program that calculates circumference and area
*/

#include <iostream>
using namespace std;
int main()
{
	float PI = 3.14159265359;
	float diameter;
	cout << "What is the diameter of the pizza in inches?" << endl;
	cin >> diameter;
	
	float area = PI * ((diameter/2) * (diameter/2));
	int slices = (area/ 14.125);
	cout << "You should cut the pizza in " << slices << " slices" << endl;
	
	return 0;
}
	