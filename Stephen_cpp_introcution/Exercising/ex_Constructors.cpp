class Dog
{
	Dog();
	string Name;
	int Age;

	void Bark();

};

// A constructor allows the programmer to access and define the functions that are inside a class and assign it to a default value(s). 
// As follow:

// To define the func Bark() you need to specify the class name followed by a scope resolution operator, a double colon "::" and the function name after it.

Dog::Bark()
{
	cout << "woof!" << endl;

};

// IMPORTANT: In order to have a constrcutor inside a class, a constructor MUST be named the same name as the class that is going to be hosting it. For example, the class Dog can have a constructor which MUST be named as Dog AND followed by parenthesis and closed by a semi-colon.

// Similarily to the one of the fucntion Bark(), we can now assing a default values to the already initialised varaibles of a class. In this case, we have the variable of type string "Name" and of type int "Age".

Dog::Dog()
{
	Name = "Spark";
	Age = 2;
};