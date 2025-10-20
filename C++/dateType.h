#pragma once
#include <iostream>
using namespace std;

class dateType
{
public:
	void setDate(int month, int day, int year);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void printDate() const;
	dateType(int month = 1, int day = 1, int year = 1900);
	void isLeapYear();
private:
	int dMonth;
	int dDay;
	int dYear;
};

void dateType::setDate(int month, int day, int year)
{
	if (month > 0 && month < 13)
		dMonth = month;
	else
		dMonth = 1;
	if (day > 0 && day < 32)
		dDay = day;
	else
		dDay = 1;
	if (year >= 1900)
		dYear = year;
	else
		dYear = 1900;
}
int dateType::getDay() const
{
	return dDay;
}
int dateType::getMonth() const
{
	return dMonth;
}
int dateType::getYear() const
{
	return dYear;
}
void dateType::printDate() const
{
	cout << dMonth << "-" << dDay << "-" << dYear;
}
dateType::dateType(int month, int day, int year)
{
	if (month > 0 && month < 13)
		dMonth = month;
	else
		dMonth = 1;
	if (day > 0 && day < 32)
		dDay = day;
	else
		dDay = 1;
	if (year >= 1900)
		dYear = year;
	else
		dYear = 1900;
}
void dateType::isLeapYear()
{
	int temp = dYear % 4;
	if (temp == 0)
		cout << "Leap Year!" << endl;
	else
		cout << "Not Leap Year!" << endl;
}