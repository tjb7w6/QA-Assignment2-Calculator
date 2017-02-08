// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
	char math;
	cout << "+,-,*,/?" << endl;
	cin >> math;
	operation op = operation();
	op.getInput(math);
    return 0;
}
/*
float addition::add(float a, float b) {
    return a + b;
}

float subtraction::subtract(float a, float b) {
    return a - b;
}

float multiplication::multiply(float a, float b) {
    return a*b;
}

float division::divide(float a, float b) {
    return a / b;
}
*/
char operation::getInput(char math) {
    bool input = false;

    
    do {
        if (math == '+' || math == '-' || math == '*' || math == '/') {
            input = true;
        }
        else {
            std::cout << "Invalid input, try again" << endl;
        }
    } while (!input);
    
    return math;
}

