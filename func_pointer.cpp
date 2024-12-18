#include <iostream>  
#include <cassert> 

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
	void (*pFunc) (int&, int&); 
	BOOL fQuit = FALSE;

	int valOne = 1; int valTwo = 2; 
	int choice; 
	while (fQuit == FALSE)
	{
		cout << "(0)Quit (1)Change Values (2)Square (3)Cube (4)Swap: "; 
		cin >> choice; 
		switch (choice) 
		{
		case 1: pFunc = GetVals; break; 
		case 2: pFunc = Square; break; 
		case 3: pFunc = Cube; break; 
		case 4: pFunc = Swap; break; 
		default: 
			fQuit = TRUE; 
			pFunc = nullptr; 
			break;
		}

		if (fQuit)  
			break;  

		PrintVals(valOne, valTwo); 
		
		if (pFunc)
			pFunc(valOne, valTwo); 

		PrintVals(valOne, valTwo); 
	}
	return 0; 
}
