#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setfill('.') << setw(40) << "Movie Name :" << setfill(' ') << setw(18) << "Journey to Mars" << endl;
	cout << setfill('.') << setw(40) << "Number of Tickets Sold :" << setfill(' ') << setw(18) << "2,650" << endl;
	cout << setfill('.') << setw(40) << "Gross Amount :" << setfill(' ') << "  " << "$" << setw(15) << "9,150.00" << endl;
	cout << setfill('.') << setw(40) << "Percentage of Gross Amount Donated :" << "  " << setfill(' ') << "%" << setw(15) << "10.00" << endl;
	cout << setfill('.') << setw(40) << "Amount Donated :" << "  " << setfill(' ') << "$" << setw(15) << "915.00" << endl;
	cout << setfill('.') << setw(40) << "Net Sale :" << "  " << setfill(' ') << "$" << setw(15) << "8,235.00" << endl;
}