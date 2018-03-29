/*
		File Name: lab1.cpp	
		Author: Isaac Ephrem	
		Date: March 29, 2018
		Purpose: My first C++ program!
*/	
#include <iostream>
using namespace std;

int main()
{
	//Variable Definitions
	float diameter = 7.5;
	float PI = 3.14159265359;
	float circumference;
	float area;

	//Calculating circumference and area of the circle	
	circumference = (2 * PI * (diameter/2));
	area = PI * ((diameter/2)*(diameter/2));
	
	//Print results to screen
	
	cout << "The circumference of the circle is " << circumference << endl;
	cout << "The area of the circle is " << area << endl;
	
	diameter = (diameter * 2);
	
	//Calculating circumference and area of the circle
	
	circumference = (2 * PI * (diameter/2));
	area = PI * ((diameter/2)*(diameter/2));
	
	//Print results to screen
	
	cout << "The circumference of the circle is " << circumference << endl;
	cout << "The area of the circle is " << area << endl;
	return 0;
}	