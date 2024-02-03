#include <iostream>
#include <vector>
#include <functional>


void ForEach(std::vector<int>& values,  const std::function<void(int)>& func) {
	for (int value : values) {
		func(value);
	}
}

int main() {

	std::vector<int> values = { 2, 3, 42, 2 };

	auto lambda = [](int value) {
		std::cout << "Value: " << value << "\n";
		};

	ForEach(values, lambda);

}