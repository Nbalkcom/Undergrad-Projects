#include <iostream>
#include <string>
#include "personType.h"
using namespace std;

int main()
{
	personType person;
	string first, middle, last, ftemp, ltemp;
	cout << "Please set the first and last name of this person: ";
	cin >> first >> last;
	cout << endl;
	person.setFirstName(first);
	person.setLastName(last);
	cout << "Please confirm if the first name is correct by typing it again: ";
	cin >> ftemp;
	person.checkFirst(ftemp);
	cout << "Outputting first name of this person: " << person.getFirstName;
	cout << "Please confirm if the last name is correct by typing it again: ";
	cin >> ltemp;
	person.checkLast(ltemp);
	cout << "Outputting last name of this person: " << person.getLastName;
	cout << "This person's name is: " << person.print << endl;
	cout << "Please set a middle name for this person: ";
	cin >> middle;
	cout << endl;
	person.setMiddleName(middle);
	cout << endl;
	cout << "This person's name has been set to: " << person.getFirstName << " " << person.getMiddleName << " " << person.getLastName;
}