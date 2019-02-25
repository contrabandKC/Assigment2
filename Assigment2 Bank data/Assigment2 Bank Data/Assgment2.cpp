// Erik Marquez	
// eemxr9@mail.umkc.edu
// 2/19/19
// Assigment 2
//CS201 


#include <iostream>
#include <string>
#include <fstream>
#include "Assigment2Module.h"
using namespace std;


int main(){

	// Varriable Declarations 

	char userInput;

	bool running = true;

	const int NUM_VALS = 10;

	ifstream inStream;

	string  firstName[NUM_VALS], lastName[NUM_VALS];

	int idNum[NUM_VALS];

	double savingsAccountBalance[NUM_VALS], checkingAccountBalance[NUM_VALS];

	//Open file and error check 
	inStream.open("input.txt");

	if (inStream.fail()) {
		cout << "Input file failed\n";
		exit(1);
	}

	//loop  reads the file and adds values to arrays

	while (!inStream.eof()) {
		
		for (int i = 0; i < NUM_VALS; ++i) {

			inStream >> idNum[i] >> firstName[i] >> lastName[i] >> savingsAccountBalance[i] >> checkingAccountBalance[i];
		}
	}


	

	//Main Program Loop
	while (running == true) {

		//Inital Menu Prompt
		userInput = MainMenu();

		userInput = toupper(userInput);
		
		
		//Menu Switch Statment
		switch (userInput)
		{

		case '1':
			//Prints All customer data

			PrintCustomerData(idNum, firstName, lastName, savingsAccountBalance, checkingAccountBalance, NUM_VALS);
			break;

		case '2':
			//Prints name and ID
			
			PrintNames(idNum, firstName, lastName, NUM_VALS);

			break;
		case '3':
			//Prints ID and account balances. Also adds the balances in a totals column

			PrintTotal(idNum, savingsAccountBalance, checkingAccountBalance, NUM_VALS);

			break;

		case 'Q':
			//Quit program

			running = false;

			break;

		default:

			//if no valid input is input
			cout << "\nWrong input. try again....\n\n\n";

			break;
		}
	
	}

	cout << "\nThank your for using UMKC Bank.\n\n\n\n";

	inStream.close();

	return 0;
}