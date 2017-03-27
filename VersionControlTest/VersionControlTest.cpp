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
	cout << "Enter a number and name: ";
	cin >> number;
	if(cin.fail() == true){
		cout << "\nERROR bad input\n";
		cin.clear();
		cin.ignore();
		number = 1;
	}
	getline(cin,name);
	UserDetails user = UserDetails(name, number);
	cout << "\nHello " << user.GetName() << endl;
	cout << user.GetNumber() / DIVIDER << endl;
	system("pause");
    return 0;
}