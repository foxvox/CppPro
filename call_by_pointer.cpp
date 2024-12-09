#include <iostream>  
using namespace std; 

void Swap(int* x, int* y); 

int main()
{
	int x = 5, y = 10; 

	cout << "Main. Before Swap(), x: " << x << " y: " << y << endl; 
	Swap(&x, &y); 
	cout << "Main. After Swap(), x: " << x << " y: " << y << endl; 

	return 0; 
} 

void Swap(int* px, int* py)
{
	int temp; 

	cout << "Swap. Before Swap(), *px: " << *px << " *py: " << *py << endl; 

	temp = *px; 
	*px = *py; 
	*py = temp; 

	cout << "Swap. After Swap(), *px: " << *px << " *py: " << *py << endl; 
}