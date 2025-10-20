/****************************************************
*
*Student Name: Nick Balkcom
*Date Due: April 15, 2020
*Date Submitted: April 11, 2020
*Program Name: NBProgram.cpp
*Program Description: This program is for a small theater to sell tickets for performances. There are 15 rows and 26 seats labeled alphabetically for each row. 
* It should display a view of the seats and their prices based on each section. The user can view the seating and how mant seats are left in each section and 
* the whole auditorium, view the sales that the theater made from each section and the auditorium as a whole, and purchase tickets/seats that marked with a #
* and replaced by a * when taken.
*
*****************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

char sectA[5][26];
char sectB[5][26];
char sectC[5][26];
double salesA = 0.00, salesB = 0.00, salesC = 0.00, salesAll = 0.00;
int seatsA = 0, seatsB = 0, seatsC = 0, seatsAll = 0;


void printSectA()
{
	cout << "| Row  1" << setw(6) << setfill(' ');
	for (int colp = 0; colp < 26; colp++)
		cout << sectA[0][colp];
	cout <<  " |" << endl;
	cout << "| Row  2" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectA[1][colp];
	cout << " |" << endl;
	cout << "| Row  3" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectA[2][colp];
	cout << " |" << endl;
	cout << "| Row  4" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectA[3][colp];
	cout << " |" << endl;
	cout << "| Row  5" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectA[4][colp];
	cout << " |" << endl;
}
void printSectB()
{
	cout << "| Row  6" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectB[0][colp];
	cout << " |" << endl;
	cout << "| Row  7" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectB[1][colp];
	cout << " |" << endl;
	cout << "| Row  8" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectB[2][colp];
	cout << " |" << endl;
	cout << "| Row  9" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectB[3][colp];
	cout << " |" << endl;
	cout << "| Row 10" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectB[4][colp];
	cout << " |" << endl;
}
void printSectC()
{
	cout << "| Row 11" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectC[0][colp];
	cout << " |" << endl;
	cout << "| Row 12" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectC[1][colp];
	cout << " |" << endl;
	cout << "| Row 13" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectC[2][colp];
	cout << " |" << endl;
	cout << "| Row 14" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectC[3][colp];
	cout << " |" << endl;
	cout << "| Row 15" << setw(6);
	for (int colp = 0; colp < 26; colp++)
		cout << sectC[4][colp];
	cout << " |" << endl;
}
void printPriceA()
{
	cout << "| (SECTION A) Row  1 ~  5: $10.00" << setw(8) << setfill(' ') << " |" << endl;
}
void printPriceB()
{
	cout << "| (SECTION B) Row  6 ~ 10: $12.00" << setw(8) << setfill(' ') << " |" << endl;
}
void printPriceC()
{
	cout << "| (SECTION C) Row 11 ~ 15: $ 8.00" << setw(8) << setfill(' ') << " |" << endl;
}
void printSalesA()
{
	cout << "| (SECTION A) TOTAL:" << setw(7) << setfill(' ') << "$" << fixed << showpoint << setprecision(2) << setw(6) << salesA << setw(8) << " |" << endl;
}
void printSalesB()
{
	cout << "| (SECTION B) TOTAL:" << setw(7) << setfill(' ') << "$" << fixed << showpoint << setprecision(2) << setw(6) << salesB << setw(8) << " |" << endl;
}
void printSalesC()
{
	cout << "| (SECTION C) TOTAL:" << setw(7) << setfill(' ') << "$" << fixed << showpoint << setprecision(2) << setw(6) << salesC << setw(8) << " |" << endl;
}
void printSalesAll()
{
	cout << "| (AUDITORIUM) TOTAL:" << setw(7) << setfill(' ') << "$" << fixed << showpoint << setprecision(2) << setw(6) << salesAll << setw(7) << " |" << endl;
}
void sStarter()
{
	cout << "+" << setw(22) << setfill('-') << "SEATS" << setw(18) << "+" << endl;
	cout << "|" << setw(40) << setfill(' ') << "ABCDEFGHIJKLMNOPQRSTUVWXYZ |" << endl;
}
void pStarter()
{
	cout << "+" << setw(22) << setfill('-') << "PRICE" << setw(18) << "+" << endl;
}
void tsStarter()
{
	cout << "+" << setw(22) << setfill('-') << "SALES" << setw(18) << "+" << endl;
}
void aStarter()
{
	cout << "+" << setw(26) << setfill('-') << "AVAILABLE SEATS" << setw(14) << "+" << endl;
}
void ender()
{
	cout << "+" << setw(40) << setfill('-') << "+" << endl;
}
void showA()
{
	sStarter();
	printSectA();
	ender();
	pStarter();
	printPriceA();
	ender();
}
void showB()
{
	sStarter();
	printSectB();
	ender();
	pStarter();
	printPriceB();
	ender();
}
void showC()
{
	sStarter();
	printSectC();
	ender();
	pStarter();
	printPriceC();
	ender();
}
void showAll()
{
	sStarter();
	printSectA();
	printSectB();
	printSectC();
	ender();
	pStarter();
	printPriceA();
	printPriceB();
	printPriceC();
	ender();
}
void displayA()
{
	showA();
	tsStarter();
	printSalesA();
	ender();
}
void displayB()
{
	showB();
	tsStarter();
	printSalesB();
	ender();
}
void displayC()
{
	showC();
	tsStarter();
	printSalesC();
	ender();
}
void displayAll()
{
	showAll();
	tsStarter();
	printSalesA();
	printSalesB();
	printSalesC();
	printSalesAll();
	ender();
}
void aSeatsA()
{
	cout << "| (SECTION A) SEATS:" << setw(7) << setfill(' ') << setw(9) << 130 - seatsA << "/130" << setw(8) << " |" << endl;
}
void aSeatsB()
{
	cout << "| (SECTION B) SEATS:" << setw(7) << setfill(' ') << setw(9) << 130 - seatsB << "/130" << setw(8) << " |" << endl;
}
void aSeatsC()
{
	cout << "| (SECTION C) SEATS:" << setw(7) << setfill(' ') << setw(9) << 130 - seatsC << "/130" << setw(8) << " |" << endl;
}
void aSeatsAll()
{
	cout << "| (AUDITORIUM) SEATS:" << setw(7) << setfill(' ') << setw(9) << 390 - seatsAll << "/390" << setw(7) << " |" << endl;
}
void seatingA()
{
	showA();
	aStarter();
	aSeatsA();
	ender();
}
void seatingB()
{
	showB();
	aStarter();
	aSeatsB();
	ender();
}
void seatingC()
{
	showC();
	aStarter();
	aSeatsC();
	ender();
}
void seatingAll()
{
	showAll();
	aStarter();
	aSeatsA();
	aSeatsB();
	aSeatsC();
	aSeatsAll();
	ender();
}
void firstSet()
{
	for (int rA = 0; rA < 5; rA++)
		for (int colA = 0; colA < 26; colA++)
			sectA[rA][colA] = '#';

	for (int rB = 0; rB < 5; rB++)
		for (int colB = 0; colB < 26; colB++)
			sectB[rB][colB] = '#';

	for (int rC = 0; rC < 5; rC++)
		for (int colC = 0; colC < 26; colC++)
			sectC[rC][colC] = '#';
}
int buySectA(int row)
{
	char seat;
	int r = row - 1;
	cout << endl << "Please enter seat letter: ";
	cin >> seat;
	cout << endl;
	switch (seat)
	{
	case 'A':
		if (sectA[r][0] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][0] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'B':
		if (sectA[r][1] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][1] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'C':
		if (sectA[r][2] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][2] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'D':
		if (sectA[r][3] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][3] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'E':
		if (sectA[r][4] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][4] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'F':
		if (sectA[r][5] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][5] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'G':
		if (sectA[r][6] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][6] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'H':
		if (sectA[r][7] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][7] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'I':
		if (sectA[r][8] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][8] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'J':
		if (sectA[r][9] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][9] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'K':
		if (sectA[r][10] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][10] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'L':
		if (sectA[r][11] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][11] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'M':
		if (sectA[r][12] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][12] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'N':
		if (sectA[r][13] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][13] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'O':
		if (sectA[r][14] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][14] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'P':
		if (sectA[r][15] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][15] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'Q':
		if (sectA[r][16] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][16] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'R':
		if (sectA[r][17] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][17] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'S':
		if (sectA[r][18] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][18] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'T':
		if (sectA[r][19] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][19] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'U':
		if (sectA[r][20] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][20] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'V':
		if (sectA[r][21] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][21] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'W':
		if (sectA[r][22] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][22] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'X':
		if (sectA[r][23] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][23] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'Y':
		if (sectA[r][24] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][24] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	case 'Z':
		if (sectA[r][25] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectA[r][25] = '*';
			cout << "Seat Purchased!";
			salesA = salesA + 10.00;
			salesAll = salesAll + 10.00;
			seatsA++;
			seatsAll++;
			break;
		}
	default:
		cout << "Invalid input! Restarting last function...";
		buySectA(r + 1);
	}
	return 0;
}
int buySectB(int row)
{
	char seat;
	int r = row - 1;
	cout << endl << "Please enter seat letter: ";
	cin >> seat;
	cout << endl;
	switch (seat)
	{
	case 'A':
		if (sectB[r][0] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][0] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'B':
		if (sectB[r][1] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][1] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'C':
		if (sectB[r][2] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][2] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'D':
		if (sectB[r][3] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][3] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'E':
		if (sectB[r][4] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][4] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'F':
		if (sectB[r][5] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][5] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'G':
		if (sectB[r][6] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][6] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'H':
		if (sectB[r][7] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][7] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'I':
		if (sectB[r][8] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][8] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'J':
		if (sectB[r][9] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][9] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'K':
		if (sectB[r][10] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][10] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'L':
		if (sectB[r][11] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][11] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'M':
		if (sectB[r][12] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][12] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'N':
		if (sectB[r][13] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][13] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'O':
		if (sectB[r][14] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][14] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'P':
		if (sectB[r][15] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][15] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'Q':
		if (sectB[r][16] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][16] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'R':
		if (sectB[r][17] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][17] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'S':
		if (sectB[r][18] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][18] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'T':
		if (sectB[r][19] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][19] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'U':
		if (sectB[r][20] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][20] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'V':
		if (sectB[r][21] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][21] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'W':
		if (sectB[r][22] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][22] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'X':
		if (sectB[r][23] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][23] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'Y':
		if (sectB[r][24] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][24] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	case 'Z':
		if (sectB[r][25] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectB[r][25] = '*';
			cout << "Seat Purchased!";
			salesB = salesB + 12.00;
			salesAll = salesAll + 12.00;
			seatsB++;
			seatsAll++;
			break;
		}
	default:
		cout << "Invalid input! Restarting last function...";
		buySectB(r + 1);
	}
	return 0;
}
int buySectC(int row)
{
	char seat;
	int r = row - 1;
	cout << endl << "Please enter seat letter: ";
	cin >> seat;
	cout << endl;
	switch (seat)
	{
	case 'A':
		if (sectC[r][0] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][0] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'B':
		if (sectC[r][1] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][1] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'C':
		if (sectC[r][2] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][2] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'D':
		if (sectC[r][3] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][3] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'E':
		if (sectC[r][4] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][4] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'F':
		if (sectC[r][5] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][5] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'G':
		if (sectC[r][6] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][6] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'H':
		if (sectC[r][7] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][7] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'I':
		if (sectC[r][8] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][8] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'J':
		if (sectC[r][9] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][9] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'K':
		if (sectC[r][10] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][10] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'L':
		if (sectC[r][11] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][11] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'M':
		if (sectC[r][12] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][12] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'N':
		if (sectC[r][13] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][13] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'O':
		if (sectC[r][14] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][14] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'P':
		if (sectC[r][15] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][15] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'Q':
		if (sectC[r][16] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][16] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'R':
		if (sectC[r][17] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][17] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'S':
		if (sectC[r][18] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][18] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'T':
		if (sectC[r][19] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][19] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'U':
		if (sectC[r][20] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][20] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'V':
		if (sectC[r][21] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][21] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'W':
		if (sectC[r][22] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][22] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'X':
		if (sectC[r][23] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][23] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'Y':
		if (sectC[r][24] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][24] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	case 'Z':
		if (sectC[r][25] == '*')
		{
			cout << "This seat is already taken!";
			break;
		}
		else
		{
			sectC[r][25] = '*';
			cout << "Seat Purchased!";
			salesC = salesC + 8.00;
			salesAll = salesAll + 8.00;
			seatsC++;
			seatsAll++;
			break;
		}
	default:
		cout << "Invalid input! Restarting last function...";
		buySectC(r + 1);
	}
	return 0;
}
void purchaseSeats()
{
	string answer1, answer2;
	int row, seat;
	cout << "Would you like to purchase tickets? (Yes or No): ";
	cin >> answer1;
	cout << endl;
	if (answer1 == "Yes" || answer1 == "yes")
	{
		cout << "Multiple tickets? (Yes or No): ";
		cin >> answer2;
		if (answer2 == "Yes" || answer2 == "yes")
		{
			showAll();
			cout << endl << "Please enter the row number: ";
			cin >> row;
			if (row >= 1 && row <= 5)
			{
				showA();
				cout << endl << "How many seats would you like to purchase? ";
				cin >> seat;
				int i = 0;
				if (seat >= 1 && seat <= 26)
				{
					do
					{
						cout << endl << "Remaining Seat Slots: " << seat - (i + 1) << endl;
						buySectA(row);
						i++;
					} while (i < seat);
					showA();
				}
				else
				{
					cout << "Invalid input! Restarting program..." << endl << endl;
					purchaseSeats();
				}
			}
			else if (row >= 6 && row <= 10)
			{
				showB();
				cout << endl << "How many seats would you like to purchase? ";
				cin >> seat;
				int i = 0;
				if (seat >= 1 && seat <= 26)
				{
					do
					{
						cout << endl << "Remaining Seat Slots: " << seat - (i + 1) << endl;
						buySectB(row);
						i++;
					} while (i < seat);
					showB();
				}
				else
				{
					cout << "Invalid input! Restarting program..." << endl << endl;
					purchaseSeats();
				}
			}
			else if (row >= 11 && row <= 15)
			{
				showC();
				cout << endl << "How many seats would you like to purchase? ";
				cin >> seat;
				int i = 0;
				if (seat >= 1 && seat <= 26)
				{
					do
					{
						cout << endl << "Remaining Seat Slots: " << seat - (i + 1) << endl;
						buySectC(row);
						i++;
					} while (i < seat);
					showC();
				}
				else
				{
					cout << "Invalid input! Restarting program..." << endl << endl;
					purchaseSeats();
				}
			}
			else
			{
				cout << "Invalid input! Restarting program..." << endl << endl;
				purchaseSeats();
			}
		}
		else if (answer2 == "No" || answer2 == "no")
		{
			showAll();
			cout << endl << "Please enter the row number: ";
			cin >> row;
			if (row >= 1 && row <= 5)
			{
				showA();
				buySectA(row);
				showA();
				
			}
			else if (row >= 6 && row <= 10)
			{
				showB();
				buySectB(row);
				showB();
			}
			else if (row >= 11 && row <= 15)
			{
				showC();
				buySectC(row);
				showC();
			}
			else
			{
				cout << "Invalid input! Restarting program..." << endl << endl;
				purchaseSeats();
			}
		}
		else
		{
			cout << "Invalid input! Restarting program..." << endl << endl;
			purchaseSeats();
		}
	}
	else if (answer1 == "No" || answer1 == "no")
	{
		cout << "Thank you for using our program!" << endl << endl;
	}
	else
	{
		cout << "Invalid input! Restarting program..." << endl << endl;
		purchaseSeats();
	}
}
void menu()
{
	int answer;
	showAll();

	cout << "1. Purchase tickets" << endl;
	cout << "2. View Seats Available" << endl;
	cout << "3. Display Current Sales" << endl;
	cout << "What would you like to do? (Select by entering the number): ";
	cin >> answer;
	cout << endl;
	if (answer == 1)
	{
		purchaseSeats();
	}
	else if (answer == 2)
	{
		int answer2;
		cout << "1. Section A" << endl;
		cout << "2. Section B" << endl;
		cout << "3. Section C" << endl;
		cout << "4. All Sections" << endl;
		cout << "Choose which section you would like to view (Select by entering the number): ";
		cin >> answer2;
		if (answer2 == 1)
		{
			seatingA();
		}
		else if (answer2 == 2)
		{
			seatingB();
		}
		else if (answer2 == 3)
		{
			seatingC();
		}
		else if (answer2 == 4)
		{
			seatingAll();
		}
		else
		{
			cout << "Invalid input! Returning back to menu screen..." << endl << endl;
			menu();
		}
	}
	else if (answer == 3)
	{
		int answer2;
		cout << "1. Section A" << endl;
		cout << "2. Section B" << endl;
		cout << "3. Section C" << endl;
		cout << "4. All Sections" << endl;
		cout << "Choose which section you would like to view (Select by entering the number): ";
		cin >> answer2;
		if (answer2 == 1)
		{
			displayA();
		}
		else if (answer2 == 2)
		{
			displayB();
		}
		else if (answer2 == 3)
		{
			displayC();
		}
		else if (answer2 == 4)
		{
			displayAll();
		}
		else
		{
			cout << "Invalid input! Returning back to menu screen..." << endl << endl;
			menu();
		}
	}
	else
	{
		cout << "Invalid input! Restarting program..." << endl << endl;
	}
}

void printSectA();
void printSectB();
void printSectC(); 
void printPriceA();
void printPriceB();
void printPriceC();
void printSalesA();
void printSalesB();
void printSalesC();
void tsStarter();
void sStarter();
void pStarter();
void ender();
void showA();
void showB();
void showC();
void showAll();
void displayA();
void displayB();
void displayC();
void displayAll();
void aSeatsA();
void aSeatsB();
void aSeatsC();
void aSeatsAll();
void seatingA();
void seatingB();
void seatingC();
void seatingAll();
void firstSet();
int buySectA(int row);
int buySectB(int row);
int buySectC(int row);
void purchaseSeats();
void menu();


int main()
{
	int p = 0;
	
	firstSet();
	do {
		menu();
	} while (p < 1);
}