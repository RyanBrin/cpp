/*
 Login And Registration
 Ryan Brinkman
 11/18/2023
*/

// include
#include <iostream>
#include <string>
using namespace std;

// variables
string account = "";
string username = "";
string password = "";
string loginUsername = "";
string loginPassword = "";
bool hasAccount = false;

int postLogin() 
{
    cout << "\nWelcome to the post login!" << endl;

    return 0;
}

int login() 
{
    cout << "\nPlease enter the username for your account: ";
    cin >> loginUsername;
    cout << "\nPlease enter the password for your account: ";
    cin >> loginPassword;
    if (loginUsername == username && loginPassword == password) 
    {
        cout << "\nAccount login success!" << endl;
        postLogin();
    }
    else 
    {
        cout << "\nERROR: Username or password are incorrect, please try again" << endl;
        login();
    }

    return 0;
}

bool choose() 
{
    bool retVal = false;

    // login or register
    cout << "\nWould you like to login (l) or register an account (r): ";
    cin >> account;

    if (account == "l") 
    {
        if (hasAccount == true) 
        {
            retVal = true;
        }
        else 
        {
            cout << "\nERROR: You must create an account first" << endl;
            retVal = false;
        }
    } 
    else if (account == "r") 
    {
        cout << "\nPlease create a username for your account: ";
        cin >> username;
        cout << "\nPlease create a password for your account: ";
        cin >> password;
        cout << "\nAccount registered successfully!" << endl;
        hasAccount = true;
        retVal = false;
    }
    else 
    {
        cout << "\nERROR: Please either choose to login (l) or register an account (r)" << endl;
        retVal = false;
    }

    return retVal;
}

// main function
int main() 
{
    while (true) 
    {
        if (choose() == true) 
        {
            login();
        }
    }

    return 0;
}