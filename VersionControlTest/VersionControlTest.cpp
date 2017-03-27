// VersionControlTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int MULTIPLIER = 3;

int main()
{
	int number;
	std::cin >> number;
	std::cout << number * MULTIPLIER << std::endl;
	std::cout << "New changes here\n";
	system("pause");
    return 0;
}

