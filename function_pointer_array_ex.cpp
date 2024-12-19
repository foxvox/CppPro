#include <iostream>  

using namespace std;

void Square(int&, int&); 
void Cube(int&, int&); 
void Swap(int&, int&); 
void GetVals(int&, int&); 
void PrintVals(int, int); 
enum BOOL { FALSE, TRUE }; 

void PrintVals(int x, int y)
{
	cout << "x: " << x << " y: " << y << endl; 
}

void Square(int& rx, int& ry)
{
	rx *= rx; 
	ry *= ry; 
}

void Cube(int& rx, int& ry)
{
	int tmp; 

	tmp = rx; 
	rx *= rx; 
	rx = rx * tmp; 

	tmp = ry; 
	ry *= ry; 
	ry = ry * tmp; 
} 

void Swap(int& rx, int& ry)
{
	int tmp; 
	tmp = rx; 
	rx = ry; 
	ry = tmp; 
}

void GetVals(int& rValOne, int& rValTwo)
{
	cout << "New value for ValOne: "; 
	cin >> rValOne; 
	cout << "New value for ValTow: "; 
	cin >> rValTwo; 
}

int main()
{
	int valOne = 1; int valTwo = 2;
	int choice = 0;
	int i = 0;  
	const int MaxArray = 5; 

	void (*pFuncArray[MaxArray]) (int&, int&);	

	for (i = 0; i < MaxArray; i++)
	{
		cout << "(1)Change Values (2)Square (3)Cube (4)Swap: ";
		cin >> choice;
		switch (choice)
		{
		case 1: pFuncArray[i] = GetVals; break;
		case 2: pFuncArray[i] = Square; break;
		case 3: pFuncArray[i] = Cube; break;
		case 4: pFuncArray[i] = Swap; break;
		default:
			pFuncArray[i] = 0;
			return 0;
		}
	} 

	for (i = 0; i < MaxArray; i++)
	{
		pFuncArray[i](valOne, valTwo); 
		PrintVals(valOne, valTwo); 
	}

	return 0; 
}
