#include <iostream>  
using namespace std;

typedef unsigned short USHORT;
enum ERR_CODE { SUCCESS, ERROR };

ERR_CODE Factor(USHORT, USHORT&, USHORT&);

int main()
{
	USHORT number, squared, cubed;
	ERR_CODE result;

	cout << "Enter a number (0 ~ 20): ";
	cin >> number;

	result = Factor(number, squared, cubed);

	if (result == SUCCESS)
	{
		cout << "number: " << number << endl;
		cout << "squared: " << squared << endl;
		cout << "cubed: " << cubed << endl;
	}
	else
	{
		cout << "Error encountered!!" << endl;
	}

	return 0;
}

ERR_CODE Factor(USHORT n, USHORT& rSquared, USHORT& rCubed)
{
	if (n > 20)
	{
		return ERROR;
	}
	else
	{
		rSquared = n * n;
		rCubed = n * n * n;
		return SUCCESS;
	}
}

