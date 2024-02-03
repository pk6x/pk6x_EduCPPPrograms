#include <iostream>

int main() // main function
{
	float num = 21.f;
	float num2 = 34.3;
	float a = num / num2;
	int b = (int)a;
	double c = (double)a;

	std::cout << "a: " << a << "\t" << "b: " << b << "\t"
				<< "c: " << c << std::endl;

	return 0;
}