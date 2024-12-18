#include <iostream>  
using namespace std;

class Cat
{
public:
	Cat(int age) : itsAge(age) { HowManyCats++; }
	virtual ~Cat() { HowManyCats--; }
	virtual int GetAge() { return itsAge; }
	virtual void SetAge(int age) { itsAge = age; }
	virtual int GetHowMany() { return HowManyCats; } 	

private:
	int itsAge;
	static int HowManyCats;
};

int Cat::HowManyCats = 0; 

void TelepathicFunction(Cat* pCat) 
{
	cout << "There are ";
	// 객체 없이 static 멤버변수에 접근 
	cout << pCat->GetHowMany() << " cats left!\n";
	cout << "Deleting the one which is "; 
	cout << pCat->GetAge() + 2 << " years old\n"; 
}

int main()
{
	const int MaxCats = 5; int i;
	Cat* CatHouse[MaxCats];
	for (i = 0; i < MaxCats; i++)
	{
		CatHouse[i] = new Cat(i);
	}

	for (i = 0; i < MaxCats; i++)
	{
		TelepathicFunction(CatHouse[i]); 
		delete CatHouse[i];		
	}

	return 0;
}


