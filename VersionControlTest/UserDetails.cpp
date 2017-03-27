#include "UserDetails.h"



UserDetails::UserDetails(): m_name(""), m_number(0)
{
}

UserDetails::UserDetails(std::string name, int number) : m_name(name),m_number(number)
{
}


UserDetails::~UserDetails()
{
}
