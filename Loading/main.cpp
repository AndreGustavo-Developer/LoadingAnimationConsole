#include <iostream>
#include <Windows.h>

void loading()
{
	char progress = 219;

	std::cout.width(40);
	std::cout << "Loading\n";
	std::cout.width(20);

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
	std::cout << std::endl;
	std::cout.width(42);
	std::cout << "COMPLETE!\n";
}

int main()
{
	loading();
	return 0;
}

