#pragma once

class Contact
{
	std::string name;
	std::string surname;
	std::string number;
public:
	Contact();
	Contact(std::string name, std::string surname, std::string number);
	~Contact();
	std::string getName() const;
	std::string getSurname() const;
	std::string getNumber() const;
};

