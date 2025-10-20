#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	double salary1;
	double salary2;
	double raise;
	double increment;

	string firstname;
	string lastname;

	inFile.open("Ch3_Ex5Data.txt");
	outFile.open("Ch3_Ex5Output.txt");

	outFile << fixed << showpoint;
	outFile << setprecision(2);

	cout << "Entering Last Name" << endl;
	inFile >> lastname;

	cout << "Entering First Name" << endl;
	inFile >> firstname;

	cout << "Entering Current Salary" << endl;
	inFile >> salary1;

	cout << "Entering Pay Increase: _%" << endl;
	inFile >> raise;

	raise = raise / 100;
	increment = salary1 * raise;
	salary2 = salary1 + increment;

	outFile << "Name: " << lastname << ", " << firstname << endl;
	outFile << "Updated Salary: " << "$ " << salary2 << endl;

	inFile.close();
	outFile.close();

	return 0;
}