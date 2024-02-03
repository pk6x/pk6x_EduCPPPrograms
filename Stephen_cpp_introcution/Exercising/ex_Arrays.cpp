#include <iostream>

int main()
{

	int myArray[5] = {1, 23, 5, 3, 9};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
	} 

	// std::cout << "myArray[0] = " << myArray[0] << std::endl;
	// std::cout << "myArray[1] = " << myArray[1] << std::endl;
	// std::cout << "myArray[2] = " << myArray[2] << std::endl;
	// std::cout << "myArray[3] = " << myArray[3] << std::endl;

	// int myIntArray[10];

	// for (int i = 0; i < 10; i++)
	// {
	// 	myIntArray[i] = i;
	// 	// std::cout << myIntArray[i] << std::endl;
	// }

	// std::cout << "The first element in myIntArray is: " << myIntArray[0] << std::endl; 
	// std::cout << "The fifth element in myIntArray is: " << myIntArray[4] << std::endl;

	system("pause");
	// return 0;
}