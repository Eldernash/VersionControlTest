// VersionControlTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const float DIVIDER = 4.5f;

int main()
{
	int number;
	cin >> number;
	cout << number / DIVIDER << endl;
	cout << "New changes here\n";
	system("pause");
    return 0;
}