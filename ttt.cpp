#include <iostream>

int main() {
	



unsigned int number = 2;
unsigned int result = number;

for (int i = 0; i < 64; ++i) {

	std::cout << result << "\n";
	if (i == 7 || i == 15 || i == 23 || i == 31) {
		std::cout << "\n";
	}
	result = number + number;
	
	number = result;
}

	return 0;
}
