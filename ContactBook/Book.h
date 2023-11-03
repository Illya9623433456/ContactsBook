#pragma once
#include "Group.h"

class Book
{
	std::string name;
	Group* groups;
	std::string text;
	int ngroup;
public:
	Book();
	Book(std::string name, std::string text, int ngroup);
	~Book();
	std::string getName() const;
	Group* getGroup() const;
	std::string getText() const;
	int getNgroup() const;
	void addGroup(const Group& group) const;
	void deleteG(std::string name);
};

