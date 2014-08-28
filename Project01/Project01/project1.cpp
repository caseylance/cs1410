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
	//declarations
	double taxableIncome = -1;
	string filingStatus;
	//const double taxOwed;
	const double TAX_RATE_ONE = .023;
	const double TAX_RATE_TWO = .033;
	const double TAX_RATE_THREE = .052;


	const double SINGLE_LIMIT_ONE = 863;
	const double SINGLE_LIMIT_TWO = 2588;
	const double SINGLE_LIMIT_THREE = 4313;
	const double SINGLE_ADD_AMOUNT_ONE = 0;
	const double SINGLE_ADD_AMOUNT_TWO = 25;
	const double SINGLE_ADD_AMOUNT_THREE = 85;
	const double SINGLE_ADD_AMOUNT_FOUR = 181;

	//Prompt the user to enter in their taxable income.
	cout << "/nPlease enter your taxable income.";
	do
	{
		
		//Get the input.
		cin >> taxableIncome;
		
		//if (!(cin >> taxableIncome))
		//{
			//cout << "/nYou must enter a valid numerical amount.";
			//taxableIncome = -1;
			//cin.ignore();
			
		//}
		if (!(cin >> taxableIncome) || taxableIncome < 0)
		{
			cout << "/nPlease enter a valid numerical amount.";
			cin.ignore();
			taxableIncome = -1;

		}
		//cin.ignore();
	} while (taxableIncome < 0);
	//Validate the input to insure that it is a positive value.You should not assume that a numerical value is entered.If the user enters non - numerical data your program should give the user an error message.Re - do this step if the input is not valid.
	 
	
		//Prompt the user to enter in "s" or "m" for filing single or jointly.
	cout << "n/Are you filing as a single person or as a married person?  Please enter 'm' if filing as married and 's' if filing as single.";
		//Get the input
		cin >> filingStatus;
		/*
	//validate that it is either "s" or "m". Re-do this step if the input is not valid.
	if (filingStatus != s || filingStatus != m)
	{
		cout << "You did not enter a valid status.  Please enter 'm' if filing as married and 's' if filing as single.";
			cin >> filingStatus;
		{

			//Based on the user's input, calculate the user's tax using the appropriate tax table and display the amount of money that person owes.
			if (filingStatus = "s")
			{
				if (taxableIncome <= SINGLE_LIMIT_ONE)
				{
					taxOwed = ((taxableIncome)*  TAX_RATE_ONE) + SINGLE_ADD_AMOUNT_ONE;
				}
				if (taxableIncome > SINGLE_LIMIT_ONE && taxableIncome <= SINGLE_LIMIT_TWO)
				{
					taxOwed = ((taxableIncome - SINGLE_LIMIT_ONE) * TAX_RATE_TWO) + SINGLE_ADD_AMOUNT_TWO;
				}
			}


			Present this data nicely formatted.
				Ask the user if they want to do another tax calculation.
				Accept either "y" or "n" as input.Validate the input and re - do this step if it is not correct.
				If the user selects "y" start back at step one.If the user selects "n" quit.For all other choices, tell that user that an invalid choice was made and ask them to input again.
				*/
	system("PAUSE");
	return 0;
}
