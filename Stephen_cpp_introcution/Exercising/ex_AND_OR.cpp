#include <iostream>

int main()
{
	int i = 1;
	int j = 1;
	int k = 3;

	if (i <= k && i == j)
	{
		std::cout << "This will be printed" << std::endl;

	}

	if (i == k || i > j)
	{
		std::cout << "This will never be printed" << std::endl;
	}

	if ((i <= k && i <= j) && j <= k)
	{
		std::cout << "This will never EVER printed, unless.." << std::endl;
	}
} 