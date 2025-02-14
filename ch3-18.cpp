// ch3-18.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Programmer: Brenna Meyer
// Date:February 13th,2025
//Interest Earned
//Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as
//Amount = Principal × (1 + RateT)T
//Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded.It should display a report similar to :

//Interest Rate : 4.25 %
//Times Compounded : 12
//Principal : $ 1000.00
//Interest : $   43.34
//Amount in Savings : $ 1043.34;

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int one = 1,
		oneHundred = 100;

	float principal,
		totalIntrest,
		amountAfterAYear,
		intrestRate,
		amountInSavings;

	int timesIntrestCompounded;

		cout << endl;
		cout << "What's the principle balance in the savings?";
	cin>> principal;

	cout << "What's the intrest rate? %";
	cin >> intrestRate;

	cout << "How many times is intrest\n";
	cout << "compounded per year?";
	cin >> timesIntrestCompounded;
	cout << endl;

	//Math;
	intrestRate /= oneHundred;

	amountAfterAYear = principal * ((one + intrestRate / timesIntrestCompounded), timesIntrestCompounded);

	totalIntrest = amountAfterAYear - principal;

	intrestRate *= oneHundred;


		//display;

	cout << "Intrest Rate: ";
	cout << intrestRate << "%" << endl;

	cout << "Times Compounded: ";
	cout << timesIntrestCompounded << endl;

	cout << "Principal $: ";
	cout << principal << endl;

	cout << "intrest: $";
	cout << intrestRate << endl;

	cout << "Amount after a year: $";
	cout << amountAfterAYear << endl;
	

	return 0;
}

