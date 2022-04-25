#include <iostream>

using namespace std;

char process = 219;
char space = ' ';

// Function Prototype
void Delay(int x);
void LoadingType1();
void LoadingType2();

// Functions
int main()
{
	cout << endl;
	cout.width(40);
	cout << "loading style 1" << endl;
	LoadingType1();

	cout << endl << endl;
	cout.width(40);
	cout << "loading style 2" << endl;
	LoadingType2();

	return 0;
}

void Delay(int x)
{
	for (int i = 0; i <= x; i++)
	{
		for (int z = 0; z <= x; z++)
		{
			//loop
		}
	}
}

void LoadingType1()
{
	cout.width(20);
	for (int i = 0; i < 25; i++)
	{
		Delay(9500);
		cout << process;
	}
}

void LoadingType2()
{
	cout.width(20);
	for (int i = 0; i < 13; i++)
	{
		Delay(9500);
		cout << process << space;
	}
}


