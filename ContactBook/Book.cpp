#include "framework.h"
#include "Book.h"

Book::Book()
	: name("-"), text("-"), ngroup(0.0)
{}

Book::Book(std::string name, std::string text, int ngroup)
	:name(name), text(text), ngroup(ngroup)
{}

Book::~Book()
{}

std::string Book::getName() const
{
	return name;
}

Group* Book::getGroup() const
{
	return groups;
}

std::string Book::getText() const
{
	return text;
}

int Book::getNgroup() const
{
	return ngroup;
}

void Book::addGroup(const Group& group) const
{
	Group* g = new Group[ngroup + 1];
	for (int i = 0; i < ngroup; i++) {
		g[i] = groups[i];
	}
	g[ngroup] = group;
	delete[] groups;
}

void Book::deleteG(std::string name)
{
	for (int i = 0; i < ngroup; i++) {
		if (getName() == name) {
			for (int j = 0; j < ngroup; j++) {
				groups[j] = groups[j + 1];
			}
			ngroup--;
			break;
		}
	}
}
