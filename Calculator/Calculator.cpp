// Trenton Briggs
//Christian Upschulte

// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
	bool stop;

	do {
		cout << "Which operation would you like to calculate? (+, -, *, /)" << endl;

		char op;
		mainClass calc;
		op = calc.getCharInput();

		cout << "Please enter the two numbers to calculate: ";

		switch (op) {
		case'+':
			addition addnum;
			cout << addnum.add(calc.getNumInput(), calc.getNumInput());
			break;
		case'-':
			subtraction subnum;
			cout << subnum.subtract(calc.getNumInput(), calc.getNumInput());
			break;
		case'*':
			multiplication multnum;
			cout << multnum.multiply(calc.getNumInput(), calc.getNumInput());
			break;
		case'/':
			division divnum;
			cout << divnum.divide(calc.getNumInput(), calc.getNumInput());
			break;
		}

		cout << endl << "Would you like to run again? (1: Yes, 0: No)";
		cin >> stop;
	} while (stop);
	
    return 0;
}

char mainClass::getCharInput() {
	char op;
	bool input = false;
	cin >> op;
	do{
		if (op == '+' || op == '-' || op == '*' || op == '/') {
			input = true;
		}
		else {
			std::cout << "Invalid input, try again" << endl;
		}
	} while (!input);

	return op;
}

double mainClass::getNumInput() {
	double num;
	cin >> num;
	return num;
}

double addition::add(double a, double b) {
	return b + a;
}

double subtraction::subtract(double a, double b) {
	return b - a;
}

double multiplication::multiply(double a, double b) {
	return b*a;
}

double division::divide(double a, double b) {
	return b / a;
}