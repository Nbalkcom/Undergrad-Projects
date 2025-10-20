#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	int mult;

	cout << "Enter two numbers:";
	cin >> num1 >> num2;
	cout << endl;
	mult = num1 * num2;

	if (num1 % 3 == 0 && num1 % 5 == 0)
		cout << num1 << " is a multiple of 3 and 5." << endl;
	else if (num1 % 3 == 0)
		cout << num1 << " is a multiple of 3." << endl;
	else if (num1 % 5 == 0)
		cout << num1 << " is a multiple of 5." << endl;
	else
		cout << num1 << " is not a multiple of 3 or 5." << endl;

	if (num2 % 3 == 0 && num2 % 5 == 0)
		cout << num2 << " is a multiple of 3 and 5." << endl;
	else if (num2 % 3 == 0)
		cout << num2 << " is a multiple of 3." << endl;
	else if (num2 % 5 == 0)
		cout << num2 << " is a multiple of 5." << endl;
	else
		cout << num2 << " is not a multiple of 3 or 5." << endl;

	if (mult % 3 == 0 && mult % 5 == 0)
		cout << mult << " is a multiple of 3 and 5." << endl;
	else if (mult % 3 == 0)
		cout << mult << " is a multiple of 3." << endl;
	else if (mult % 5 == 0)
		cout << mult << " is a multiple of 5." << endl;
	else
		cout << mult << " is not a multiple of 3 or 5." << endl;
}