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

	ofstream outStream;

	string  firstName[NUM_VALS], lastName[NUM_VALS];

	int idNum[NUM_VALS], savingsAccountBalance[NUM_VALS], checkingAccountBalance[NUM_VALS];

	inStream.open("input.txt");

	if (inStream.fail()) {
		cout << "Input file failed\n";
		exit(1);
	}


	while (!inStream.eof()) {
		
		for (i=0; i < N)

		inStream >> idNum[] >> firstName[] >> lastName >> savingsAccountBalance >> checkingAccountBalance;

		// cout << idNum << firstName << lastName << savingsAccountBalance << checkingAccountBalance << endl;


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
			//
			PrintCustomerData();
			break;
		case '2':
			//
			
			PrintNames();

			break;
		case '3':
			//

			PrintTotal();

			break;
		case 'Q':
			//Quit program

			running = false;

			break;

		default:

			//if no valid input is input
			cout << "Please enter choice 1, 2 , 3, or Q.\n";

			break;
		}
	
	}



	inStream.close();
	outStream.close();

	return 0;
}