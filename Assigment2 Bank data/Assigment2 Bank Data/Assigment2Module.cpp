#include "Assigment2Module.h"
#include <iostream>
#include <string>
#include "string.h"
#include <cmath>
#include <iomanip>


using namespace std;

char MainMenu()
{
	//Main Menu Prompt

	char input = ' ' ;

	cout << "1. Print all customer data\n";
	cout << "2. Print names and IDs\n";
	cout << "3. Print account totals\n";
	cout << "4. Enter q/Q to quite\n";
	
	cin >> input;


	return input;
}

void PrintCustomerData(const int id[], const string first[], const string last[], const double savings_Account[], int size)
{
}

void PrintNames(const int id[], const string first[], const string last[], int size)
{
}

void PrintTotal(const int id[], const double savings_account[], const double checking_Account[], int size)
{
}
