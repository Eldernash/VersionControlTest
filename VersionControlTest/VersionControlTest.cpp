// VersionControlTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int MULTIPLIER = 300;

int main()
{
	int number;
	cin >> number;
	cout << number * MULTIPLIER << endl;
	cout << "New changes here\n";
	system("pause");
    return 0;
}

