#pragma once
#include <iostream>
#include <string>
using namespace std;

class personType
{
public:
	void print() const;
	void setName(string first, string last);
	string getFirstName() const;
	string getLastName() const;
	string getMiddleName() const;
	personType(string first = "", string last = "");
	void setFirstName(string first);
	void setLastName(string last);
	void setMiddleName(string middle);
	bool checkFirst(string first);
	bool checkLast(string last);

private:
	string firstName;
	string lastName;
	string middleName;
};

void personType::print() const
{
	cout << firstName << " " << lastName;
}
void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}
string personType::getFirstName() const
{
	return firstName;
}
string personType::getMiddleName() const
{
	return middleName;
}
string personType::getLastName() const
{
	return lastName;
}
void personType::setFirstName(string first)
{
	firstName = first;
}
void personType::setMiddleName(string middle)
{
	middleName = middle;
}
void personType::setLastName(string last)
{
	lastName = last;
}
bool personType::checkFirst(string first)
{
	if (first == firstName)
		cout << "They have the same first name!" << endl;
	else
		cout << "They do not have the same first name!" << endl;
}
bool personType::checkLast(string last)
{
	if (last == lastName)
		cout << "They have the same last name!" << endl;
	else
		cout << "They do not have the same last name!" << endl;
}
personType::personType(string first, string last)
{
	firstName = first;
	lastName = last;
}
