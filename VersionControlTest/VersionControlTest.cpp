// VersionControlTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "UserDetails.h"
#include <windows.h>

using namespace std;

const float DIVIDER = 4.5f;

int main()
{
	int number;
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter a number: ";
	cin >> number;
	if (cin.fail() == true) {
		cout << "\nERROR bad input\n";
		cin.clear();
		cin.ignore();
		number = 1;
	}
	UserDetails user = UserDetails(name, number);
	cout << "Hello " + user.GetName() << endl;
	cout << user.GetNumber() << " divided by " << DIVIDER << " is " << user.GetNumber() / DIVIDER << endl;
	cout << "New changes here\n";
	cout << "\n";
	cout << "      00000     \n";
	cout << "    000000000   \n";
	cout << "   00000000000  \n";
	cout << "   00  000  00  \n";
	cout << "   00  000  00  \n";
	cout << "   00000000000  \n";
	cout << "   0000   0000  \n";
	cout << "    000000000   \n";
	cout << "     0 0 0 0    \n";
	cout << "     0 0 0 0    \n";

	string colorchoice;
	cout << "\n\nDo you like red, white, or blue? ";
	cin >> colorchoice;
	for (size_t i = 0; i < colorchoice.size(); ++i) {
		colorchoice[i] = tolower(colorchoice[i]);
	}
	if (colorchoice == "red") {
		system("color 4");
	}
	else if (colorchoice == "blue") {
		system("color 1");
	}
		cout << "How's this then?" << endl;
	system("pause");
    return 0;
}