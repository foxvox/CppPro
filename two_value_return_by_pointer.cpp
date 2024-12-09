#include <iostream>  
using namespace std; 

typedef unsigned short USHORT; 

short Factor(USHORT, USHORT*, USHORT*); 

int main()
{
	USHORT number, squared, cubed; 
	short error; 

	cout << "Enter a number (0 ~ 20): "; 
	cin >> number; 

	error = Factor(number, &squared, &cubed); 

	if (!error)
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

short Factor(USHORT n, USHORT* pSqured, USHORT* pCubed)
{
	short value = 0; 

	if (n > 20)
	{
		value = 1; 
	}
	else
	{
		*pSqured = n * n; 
		*pCubed = n * n * n; 
		value = 0; 
	}

	return value; 
}

