#include <iostream>
#include <Windows.h>

void loading()
{
	std::cout << "Loading ";
	char progress = 219;

	for (int i = 0; i < 35; i++)
	{
		std::cout << progress;

		if (i < 10)
			Sleep(300);
		if (i >= 10 && i < 20)
			Sleep(150);
		if (i >= 10)
			Sleep(25);
	}
	std::cout << "\nsuccessfully loaded\n";
}

int main()
{
	loading();
	return 0;
}

