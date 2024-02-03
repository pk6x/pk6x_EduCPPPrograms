#include <iostream>
#include <string>
using namespace std;

// Multiple inheritance

// The most upper class (the base or the parent)
class Animal
{
public:
	Animal(); // Overload constrcutor.
	Animal(string name, int age, int num_limbs); // Overloading. Notice the variables names start with lowercased letters to distinguished them from the original contsructor 

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

// Inheritance 

class Dog : public Animal 
// This is the basic inheritance in cpp. Now the Dog class will inherit every variable or funcs that is already included in the Animal class.
{
public:

	Dog();
	Dog(string name, int age, int num_limbs);

	void Speak();

};

// More customised derived class from its upper class
class Corgi : public Dog 
// This class will inherit everything that dog has therefore what dog inherited from before
{

};

int main()
{
	Dog dog("Spot", 4, 5);

	dog.Speak(); 

	Corgi corgi;

	corgi.Speak();

	corgi.Report();

	// Animal animal;

	// animal.Report();

	// Animal animal_2("Cheetah", 6, 5); // The overloaded version 

	// animal_2.Report();

	system("pause");
}

// First animal constructor Overload. To have default values
Animal::Animal()
{
	cout << "An ANIMAL is born!" << endl;

	Name = "Default animal name";
	Age = 2;
	NumberOfLimbs = 4;
}

// Second animal constructor (overloader)
Animal::Animal(string name, int age, int num_limbs)
	: Name(name), Age(age), NumberOfLimbs(num_limbs)
{
	Report();
	// Name = name;
	// Age = age;
	// NumberOfLimbs = num_limbs;
}

// Define the Report() func of Animal class 
void Animal::Report()
{
	cout << "Name: " << Name << endl;
	cout << "Age : " << Age << endl;
	cout << "Number of limbs: " << NumberOfLimbs << endl;
}

Dog::Dog()
{
	cout << "A DOG is born!" << endl;
	// cout << "Name: " << Name << endl;
}

Dog::Dog(string name, int age, int num_limbs)
	: Animal(name, age, num_limbs) // Using the notation syntax ":" will not call the base overload constructor (The first version of Animal constructor) and will specifically goint to call the overload constructor that has the same amount of inputs or parameters. 
{	
};

void Dog::Speak()
{
	cout << "woof!" << endl;
}
