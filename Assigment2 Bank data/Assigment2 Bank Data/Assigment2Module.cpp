#include "Assigment2Module.h"
#include <iostream>
#include <string>
#include "string.h"
#include <cmath>
#include <iomanip>


using namespace std;

char MainMenu()
{
	//Main Menu Prompt takes input and returns

	char input = ' ' ;

	cout << "1. Print all customer data\n";
	cout << "2. Print names and IDs\n";
	cout << "3. Print account totals\n";
	cout << "4. Enter q/Q to quite\n\n";
	cout << "Enter your choice, or 'q' to quit:";
	
	cin >> input;


	return input;
}

void PrintCustomerData(const int id[], const string first[], const string last[], const double savings_Account[], const double checking_Account[], int size)
{
	//Prints master customer table list. Does not return any values

	cout << endl;
	cout << setw(7)  << left << "ID";
	cout << setw(11) << left << "FIRST";
	cout << setw(15) << left << "LAST";
	cout << setw(20) << left << "SAVINGS ACCOUNT";
	cout << "CHEKCING ACCOUNT" << endl;

	for (int i = 0; i < size; i++) {
		
		cout << setw(7) << left << id[i];
		cout << setw(11) << left << first[i];
		cout << setw(15) << left << last[i];
		cout << setprecision(2) << fixed << left << setw(20) <<  savings_Account[i];
		cout << setprecision(2) << fixed <<  checking_Account[i] << endl;
	}
	cout << "\n" << "\n" << "\n";
}

void PrintNames(const int id[], const string first[], const string last[], int size)
{
	//Prints IDs and names. Does not return any values. 
	cout << endl;
	cout << setw(7) << left << "ID";
	cout << setw(11) << left << "FIRST";
	cout << setw(15) << left << "LAST" << endl;


	for (int i = 0; i < size; i++) {

		cout << setw(7) << left << id[i];
		cout << setw(11) << left << first[i];
		cout << setw(15) << left << last[i] << endl;
	
	}
	cout << "\n" << "\n" << "\n";
}

void PrintTotal(const int id[], const double savings_account[], const double checking_Account[], int size)
{
	//Prints ID and Account values. Adds the accounts together but does not change any values.
	cout << endl;
	cout << setw(7) << left << "ID";
	cout << setw(20) << left << "SAVINGS ACCOUNT";
	cout << setw(20) << left << "CHEKCING ACCOUNT";
	cout << " TOTAL" << endl;

	for (int i = 0; i < size; i++) {

		cout << setw(7) << left << id[i];
		cout << setprecision(2) << fixed << left << setw(20) << savings_account[i];
		cout << setprecision(2) << fixed << setw(21) << left << checking_Account[i];
		cout << setprecision(2) << fixed << savings_account[i] +checking_Account[i] << endl;
	}
	cout << "\n" << "\n" << "\n";
}
