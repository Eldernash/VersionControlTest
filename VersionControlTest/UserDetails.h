#pragma once
#include <string>

class UserDetails
{
public:
	UserDetails();
	UserDetails(std::string name, int number);
	~UserDetails();

	std::string GetName() {
		return m_name;
	}

	int GetNumber() {
		return m_number;
	}
private:
	std::string m_name;
	int m_number;
};

