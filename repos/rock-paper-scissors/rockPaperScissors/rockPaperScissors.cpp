/*
Rock Paper Scissors
Ryan Brinkman
11/18/2023
*/

// include
#include <iostream>
#include <string>
using namespace std;

// variables
int computer;
const string rock = "r";
const string paper = "p";
const string scissors = "s";
string player;

// player choice function
int pickChoice() {
    cout << "\nChoose either Rock (r), Paper (p), Or Scissors (s): ";
    cin >> player;

    if (player == rock) {
        cout << "\nYou chose Rock!" << endl;
    }
    else if (player == paper) {
        cout << "\nYou chose Paper!" << endl;
    }
    else if (player == scissors) {
        cout << "\nYou chose Scissors!" << endl;
    }
    else {
        cout << "\nERROR: Choose either Rock (r), Paper (p), Or Scissors (s) and try again" << endl;
        pickChoice();
    }

    return 0;
}

// main function
int main() {
    // player choice
    pickChoice();

    // computer choice
    cout << "\nComputer is choosing... " << endl;
    srand(static_cast<unsigned int>(time(0)));
    computer = rand() % 3 + 1;

    if (computer == 1) {
        cout << "\nComputer chose Rock!" << endl;

    } else if (computer == 2) {
        cout << "\nComputer chose Paper!" << endl;

    } else if (computer == 3) {
        cout << "\nComputer chose Scissors!" << endl;

    }
    
    // determine winner
    if (player == "r" && computer == 1) {
        cout << "\nGame has ended in a tie!" << endl;

    } else if(player == "r" && computer == 2) {
        cout << "\nComputer has won the game!" << endl;

    } else if(player == "r" && computer == 3) {
        cout << "\nPlayer has won the game!" << endl;

    } else if (player == "p" && computer == 1) {
        cout << "\nPlayer has won the game!" << endl;

    } else if (player == "p" && computer == 2) {
        cout << "\nGame has ended in a tie!" << endl;
        
    } else if (player == "p" && computer == 3) {
        cout << "\nComputer has won the game!" << endl;

    } else if (player == "s" && computer == 1) {
        cout << "\nComputer has won the game!" << endl;

    } else if (player == "s" && computer == 2) {
        cout << "\nPlayer has won the game!" << endl;

    } else if (player == "s" && computer == 3) {
        cout << "\nGame has ended in a tie!" << endl;

    }

    return 0;
}