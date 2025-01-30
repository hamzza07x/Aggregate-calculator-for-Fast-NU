#include<iostream>
#include<string>
#include<stdexcept>
#include"Section.h"
#include"Aggregate.h"
#include"color.h"
using namespace std;
//function to display introduction banner
void intro() {
	cout << endl;
	cout << RED << "****************************************************" << endl;
	cout << "*            FAST NU AGGREGATE CALCULATOR          *" << endl;
	cout << "****************************************************" << RESET << endl;
	cout << endl;
}
int main() {
	
	int userChoice;
	AggregateCalculator calculator;
	try {
		do {
			intro();//display introduction banner
			//prompt user for choice
			cout <<GREEN<< "Enter "<<RESET<<1<<GREEN<<" to continue and any other number to exit" << endl;
			cout << "Enter your choice: "<<RESET;
			cin >> userChoice;
			//if input is not valid handle the error
			if (userChoice > 1) {
				throw userChoice;//exception thrown for invalid input
			}
			if (cin.fail()) {//if user enters non numeric input
				cin.clear();//clear error flag
				cin.ignore();//ignore incorrect input
				throw exception(" error");
			}
			//if the user chooses to proceede with the calculator
			if (userChoice == 1) {
				system("cls");//clear screen
				calculator.inputPersonalInfo();//input personal details
				calculator.inputAllSections();//input each section scores
				calculator.displayAllScores();//display all scores of section
				cout << RED;
				system("pause");//pause for user to review output
				cout << RESET;
				calculator.calculateTotalAggregate();//calculate aggregate score
				cout << RED;
				system("pause");//pause for user to review output
				cout << RESET;
				cout << endl;
			}
			system("cls");//clear screen before restarting loop
		} while (userChoice == 1);//continue if user chooses 1
	}
	//exception handling for invalid choices
	catch (int x) {
		if (x > 1) {
			cout << "User choice" << RED << " can either be " << RESET << 0 << RED << " or " << RESET << 1 << endl;
		}
		else if (x < 0) {
			cout << "Uer choice" << RED << " can either be " << RESET << 0 << RED << " or " << RESET << 1 << endl;
		}
	}
	//exception handling for general errors
	catch (exception& error) {
		cout <<RED <<"Unable to find any match." << error.what() << RESET<<endl;
	}
	//catch unexpected error
	catch (...) {
		cout <<RED<< "Unexpected error" <<RESET<< endl;
	}
	cout << RED;
	cin.get();//wait for user input befor exiting
	system("pause");//pause for user to review output

	return 0;
}
