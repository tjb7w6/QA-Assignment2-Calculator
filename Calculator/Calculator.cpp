// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
    return 0;
}

char mainClass::getCharInput() {
	char op;
	bool input = false;
	//cin >> op;
	op = '+';
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
	//cin >> num;
	num = 1;
	return num;
}