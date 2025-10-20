#include <iostream>
#include "dateType.h"
using namespace std;

int main()
{
	int m;
	int d;
	int y;
	dateType thisDate;

	cout << "Please enter today's date(MM-DD-YYYY)" << endl;
	cout << "Today's month: ";
	cin >> m;
	cout << endl << "Today's day: ";
	cin >> d;
	cout << endl << "Today's year: ";
	cin >> y;
	cout << endl;
	thisDate.setDate(m, d, y);
	cout << endl;
	cout << "Today's date is: ";
	thisDate.printDate();
	cout << endl;
	thisDate.isLeapYear();
}