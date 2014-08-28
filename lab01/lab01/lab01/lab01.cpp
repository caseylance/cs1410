// Author: Casey Lance
// Assignment: Lab #1
// Instructor: Dr. Debry
// Class: CS 1410 Section: x01
// Date Written: 8/27/2014 
// Description: the description of what's in this file 

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
// --------------------------


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	// declarations
	int age;
	double value;
	string name;

	// Here you must supply code that does the following:
	// Your program must work in the order described
	// (you can use the following as pseudo-code):
	// Prompt the user for their age
	cout << "\nPlease enter your age. ";

	// Get their age and store it in the variable age
	cin >> age;

	// Prompt the user for how much money they have
	cout << "\nHow much money do you have? ";
	// Get the amount of money and store it in the variable value
	cin >> value;
	
	// Prompt the user to enter their full name.
	cout << "\nPlease enter your full name. ";

	//Get their name and store it in the string variable name
	cin.ignore();
	getline(cin, name);
	

	// Now display the following:
	//    The person's name. You must display the full name
	cout << "\nYour name is " << name << ".";
	//    The person's age
	cout << "\nYou are " << age << " years old.";
		//    The money the person has. Display a dollar sign and two digits 
		//    after the decimal point.
		cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "\nYou have $" << value << "." << endl;
	system("PAUSE");
	return 0;
}
