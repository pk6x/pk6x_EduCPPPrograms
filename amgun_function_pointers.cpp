#include <iostream>
#include <vector>

void PrintValue(int value) {
	std::cout << "Value: " << value << "\n";
}

void ForEach(std::vector<int>& values, void(*func)(int)) {
	for (int value : values) {
		func(value);
	}
}

int main() {

	std::vector<int> values = { 2, 3, 42, 2 };

	ForEach(values, PrintValue);

}