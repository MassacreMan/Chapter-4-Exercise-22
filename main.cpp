//This program calculates a customer's monthly bill based on the service chosen.
#include <iostream>
using namespace std;

int main()

{

	// Constant variables. Base rate for service plans.

	double constantA = 39.99;
	double constantB = 59.99;
	double constantC = 79.99;


	// Variables for data rates (in gigabytes).
	int x = 0;

	int dataRateA = (8 * (2 * x));
	int dataRateB = (8 * (8 * x));

	// Service plan rates.
	double planA = constantA + dataRateA;
	double planB = constantB + dataRateB;
	double planC = constantC; 

	{

		char choice;

	    cout << "Please select a Service Plan: A, B, or C: ";
		cin >> choice;
		switch (choice)
		
		{

		case 'a':
		case 'A': cout << "You have chosen Plan A. Your monthly bill is: $" << planA << endl;
			cout << "You save twenty dollars compared to Plan B and forty dollars compared to Plan C." << endl;
			break;

		case 'b':
		case 'B': cout << "You have chosen Plan B. Your monthly bill is: $" << planB << endl;
			cout << "You save forty dollars compared to Plan C." << endl; 
			break;

		case 'c':
		case 'C': cout << "You have chosen Plan C. Your monthly bill is: $" << planC << endl;
			break;

		}

	}
	return 0;
}