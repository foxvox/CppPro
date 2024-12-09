#include <iostream>  
using namespace std; 

void Swap(int &rx, int &ry); 

int main()
{
	int x = 5, y = 10; 

	cout << "Main. Before Swap(), x: " << x << " y: " << y << endl; 
	Swap(x, y); 
	cout << "Main. After Swap(), x: " << x << " y: " << y << endl; 

	return 0; 
} 

void Swap(int &rx, int &ry)
{
	int temp; 

	cout << "Swap. Before Swap(), rx: " << rx << " ry: " << ry << endl; 

	temp = rx; 
	rx = ry; 
	ry = temp; 

	cout << "Swap. After Swap(), rx: " << rx << " ry: " << ry << endl; 
}