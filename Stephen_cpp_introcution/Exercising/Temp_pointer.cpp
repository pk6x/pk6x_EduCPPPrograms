#include <iostream>

unsigned int Multiply(int num, int num2)
{
	
	unsigned int result = num * num2 * 2000000000000;
	return result;
}

int main()
{

	unsigned int num = 2000000000;
	unsigned int num2 = 400000000;

	int multiply_eq = Multiply(num, num2);

	std::cout << multiply_eq << std::endl;

/*	int* ptr;

	int var = 8;

	// ptr = var;

	// std::cout << ptr << std::endl;

	ptr = &var;	
	*ptr = 2;*/

	// std::cout << *ptr << std::endl;



	
}