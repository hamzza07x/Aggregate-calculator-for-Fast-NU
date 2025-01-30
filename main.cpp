#include<iostream>
#include<string>
#include<stdexcept>
#include"Section.h"
#include"Aggregate.h"
#include"color.h"
using namespace std;
void intro() {
	cout << endl;
	cout << RED << "****************************************************" << endl;
	cout << "*            FAST NU AGGREGATE CALCULATOR          *" << endl;
	cout << "****************************************************" << RESET << endl;
	cout << endl;
}
int main() {
	//intro();
	int userChoice;
	AggregateCalculator calculator;
	try {
		do {
			intro();
			cout <<GREEN<< "Enter "<<RESET<<1<<GREEN<<" to continue and any other number to exit" << endl;
			cout << "Enter your choice: "<<RESET;
			cin >> userChoice;
			//cin.ignore();
			if (userChoice > 1) {
				throw userChoice;
			}
			if (cin.fail()) {
				cin.clear();
				cin.ignore();
				throw exception(" error");
			}
			if (userChoice == 1) {
				system("cls");
				calculator.inputPersonalInfo();
				calculator.inputAllSections();
				calculator.displayAllScores();
				cout << RED;
				system("pause");
				cout << RESET;
				calculator.calculateTotalAggregate();
				cout << RED;
				system("pause");
				cout << RESET;
				cout << endl;
			}
			system("cls");
		} while (userChoice == 1);
	}
	catch (int x) {
		if (x > 1) {
			cout << "User choice" << RED << " can either be " << RESET << 0 << RED << " or " << RESET << 1 << endl;
		}
		else if (x < 0) {
			cout << "Uer choice" << RED << " can either be " << RESET << 0 << RED << " or " << RESET << 1 << endl;
		}
	}
	catch (exception& error) {
		cout <<RED <<"Unable to find any match." << error.what() << RESET<<endl;
	}
	catch (...) {
		cout <<RED<< "Unexpected error" <<RESET<< endl;
	}
	cout << RED;
	cin.get();
	system("pause");

	return 0;
}