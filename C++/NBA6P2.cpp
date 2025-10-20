#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;
	string file;
	int int1 = 0;
	int int2 = 0;
	int int3 = 0;
	int int4 = 0;
	int int5 = 0;
	int int6 = 0;
	int int7 = 0;
	int int8 = 0;
	int x;
	string scoreRange[8] = { "0-24","25-49","50-74","75-99","100-124","125-149","150-174","175-200" };

	int students[8] = { int1,int2,int3,int4,int5,int6,int7,int8 };

	cout << "Enter input file: ";
	cin >> file;
	inFile.open(file);
	
	while (inFile >> x)
	{
		if (x <= 24)
			int1++;
		else if (25 <= x <= 49)
			int2++;
		else if (50 <= x <= 74)
			int3++;
		else if (75 <= x <= 99)
			int4++;
		else if (100 <= x <= 124)
			int5++;
		else if (125 <= x <= 149)
			int6++;
		else if (150 <= x <= 174)
			int7++;
		else if (x >= 175)
			int8++;
	}

	cout << setw(12) << "Score Range: ";
	for (int i = 0; i < 8; i++)
		cout << setw(7) << scoreRange[i] << " ";
	cout << endl;

	cout << setw(12) << "Students: ";
	for (int num = 0; num < 8; num++)
		cout << setw(7) << students[num] << " ";

	inFile.close();
	return 0;
}