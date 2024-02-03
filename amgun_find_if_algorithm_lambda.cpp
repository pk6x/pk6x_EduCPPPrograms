#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


void ForEach(std::vector<int>& values,  const std::function<void(int)>& func) {
	for (int value : values) {
		func(value);
	}
}

int main() {

	std::vector<int> values = { 2, 3, 42, 2 };

	auto it = std::find_if ( values.begin(), values.end(), [](int value) { return value > 3; });

	std::cout << *it << "\n";

	auto lambda = [](int value) {
		std::cout << "Value: " << value << "\n";
		};

	ForEach(values, lambda);

}