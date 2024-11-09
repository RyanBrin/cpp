/*
 Div And Mod
 Ryan Brinkman
 11/17/2023
*/

// include
#include <iostream>
using namespace std;

// main function
int main() {

	// variables
	int int1;
	int int2;
	double output1;
	double output2;
	double output3;
	double output4;

	// get data
	cout << "\nEnter an integer: ";
	cin >> int1;
	cout << "\nEnter a second integer: ";
	cin >> int2;
	cout << endl;

	// calculate outputs
	output1 = int1 / int2;
	output2 = int1 % int2;
	output3 = int2 / int1;
	output4 = int2 % int1;

	// display outputs
	cout << int1 << "/" << int2 << "=" << output1 << endl;
	cout << int1 << "%" << int2 << "=" << output2 << endl;
	cout << int2 << "/" << int1 << "=" << output3 << endl;
	cout << int2 << "%" << int1 << "=" << output4 << endl;

}