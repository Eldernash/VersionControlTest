// VersionControlTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "UserDetails.h"

using namespace std;

const float DIVIDER = 4.5f;


int main()
{
	int number;
	string name;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter your name; ";
	cin >> name;
	UserDetails user = UserDetails(name, number);
	cout << "Hello " + user.GetName() << endl;
	cout << user.GetNumber() << " divided by " << DIVIDER << " is " << user.GetNumber() / DIVIDER << endl;
	cout << "New changes here\n";
	system("pause");
    return 0;
}