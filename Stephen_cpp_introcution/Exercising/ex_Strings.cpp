#include <iostream>
#include <string>

// using namespace std;

int main()
{
	// char MyCString[5] = {'D', 'o', 'g', 's', '\0' };

	// char MyCString[5] = "Dogs";


	std::string MyString = "My cat's name is: ";	

	std::string first = "Spot";
	std::string space = " ";
	std::string last = "Jones";

	// MyString += first;
	// MyString += space;
	// MyString += last;

	MyString += (first + space + last);

	std::cout << MyString << std::endl;

	// cout << MyCString << endl;

	system("pause");
}