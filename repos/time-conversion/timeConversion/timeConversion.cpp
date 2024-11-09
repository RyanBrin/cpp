/*
 Time Conversion
 Ryan Brinkman
 11/17/2023
*/

// include
#include <iostream>
using namespace std;

// main function
int main() {

	// variables
	int minutes;
	int hours;

	// get time
	cout << "\nEnter the time in minutes: ";
	cin >> minutes;

	// calculate and display
	hours = minutes / 60;
	minutes = minutes - (hours * 60);
	cout << "\nConverted time is " << hours << " hours and " << minutes << " minutes" << endl;
}