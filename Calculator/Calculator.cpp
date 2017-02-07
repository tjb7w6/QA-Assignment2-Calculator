// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
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
char operation::getInput() {
    bool input = false;
    char math;
    cout << "+,-,*,/?" << endl;
    cin >> math;
    /*
    do {
        if (math == '+' || math == '-' || math == '*' || math == '/') {
            input = true;
        }
        else {
            std::cout << "Invalid input, try again" << endl;
        }
    } while (!input);
    */
    return math;
}

