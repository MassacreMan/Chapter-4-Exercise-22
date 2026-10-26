//This program calculates a customer's monthly bill based on the service chosen.
#include <iostream>
#include <string>
using namespace std;

int main()

{

	// Constant variables. Base rate for service plans.

	double constantA = 39.99;
	double constantB = 59.99;
	double constantC = 79.99;


	// Variables for data rates (in gigabytes).

	double dataLimitA = 2.0;
	double dataLimitB = 8.0;


	// Variable for Gigabytes Used
	double gbUsed;

	// Customer Inputs
	
	{

		char plan;
		string name; 

		cout << "Please enter your name: ";
		cin >> name;
		
		cout << "Please select a Service Plan: A, B, or C: ";
		cin >> plan;

		cout << "Enter the number of gigabytes used per month: ";
		cin >> gbUsed;
		
		
		// Price calculation based on plan and data usage
		
		{
			double costA = constantA;
			if (gbUsed > dataLimitA) {
				costA = constantA + (gbUsed - dataLimitA) * 8.00;
			}
			
			double costB = constantB;
			if (gbUsed > dataLimitB) {
				costB = constantB + (gbUsed - dataLimitB) * 8.00;
			}
			
			double costC = constantC; 

			double Total = 0.0;
			
			if (plan == 'A') {
				Total = costA;
			}
			else if (plan == 'B') {
				Total = costB;
			}
			else if (plan == 'C') {
				Total = costC;
			} else {
				cout << "Can't do that. Invalid plan" << endl;
				return 1;
			}
			
			// Displays savings
			
			if (plan == 'A') {
				if (costB < costA) {
					double savingsB = costA - costB;
					cout << "By switching to Plan B, you save: $" << savingsB << endl;
				}
				if (costC < costA) {
					double savingsC = costA - costC; 
					cout << "By switching to Plan C, you save: $" << savingsC << endl;
				}
				
			}
			
			else if (plan == 'B') {
				if (costC < costB) {
					double savingsC = costB - costC;
					cout << " By switching to Plan C, you save: $" << savingsC << endl;

				}
			}

		}

	}
	return 0;
}