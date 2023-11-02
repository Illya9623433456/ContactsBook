#include "framework.h"
#include "Contact.h"

Contact::Contact()
	: name("-"), surname("-"), number("-")
{}

Contact::Contact(std::string name, std::string surname, std::string number)
	: name(name), surname(surname), number(number)
{}

Contact::~Contact()
{}

std::string Contact::getName() const
{
	return name;
}

std::string Contact::getSurname() const
{
	return surname;
}

std::string Contact::getNumber() const
{
	return number;
}
