#include <iostream>  
using namespace std; 

typedef unsigned short USHORT; 
enum ERR_CODE {SUCCESS, ERROR};

short Factor(USHORT, USHORT&, USHORT&); 

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

short Factor(USHORT n, USHORT* pSqured, USHORT* pCubed)
{
	if (n > 20)
	{
		return ERROR;  
	}
	else
	{
		*pSqured = n * n; 
		*pCubed = n * n * n; 
		return SUCCESS; 
	}	
}

