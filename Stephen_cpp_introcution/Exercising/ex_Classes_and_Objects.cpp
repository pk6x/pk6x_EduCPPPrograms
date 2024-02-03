#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:

	Dog(); // A constructor
	/*{
		Bark(); // This will kicks in as soon as an instance is created of this class.

		Name = "Default Name";
		Age = 10;
		Health = 100.f;
	}*/

	string Name;
	int Age;
	float Health;

	void Bark();
	
};

// A constrcutor can also be used in a struct type object. 
struct Cat
{
	Cat(); // A constructor
	/*{
		Meow(); // This func will kicks in as soon as the instance was created of this struct. 

		Name = "Default cat name";
		Age = 2;
		Health = 7.f;
	}*/

	int Age;
	float Health;


	void Meow();
};


// End of Cat struct

int main()
{

	Cat cat;

	Dog dog;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	dog.Name = "Sam";
	dog.Age = 14;
	dog.Health = 43.5;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	dog.Bark();

	system("pause");
}


// Detailing...

Dog::Dog()
{
	Bark();
	
	Name = "Default Name";
	Age = 10;
	Health = 100.f;

}

void Dog::Bark()
{
	cout << "woof!" << endl;
}

Cat::Cat()
{

	cout << "A new cat is born!" << endl;

	Age	= 3;

	Health = 99.f;

	Meow();
}

void Cat::Meow()
{
	cout << "My age is: " << Age << endl;
	cout << "My health is: " << Health << endl;
}