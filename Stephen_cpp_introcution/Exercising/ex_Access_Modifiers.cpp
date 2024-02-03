// 3 level of access restrictions
// Public: Can be accessed outside the class body and anywhere. 
// Private: Can't be accessed from outside the class or struct body and only within the class or struct body.
// Protected: Variables and funcs are accessible from within the class and with the derived classed or childs from that upper class.


// By default, the inside of a class body is set to private and you need to specify or explicitly spit the keyword "Public:" with the notation symbol or colon in order to make a part of all of it publicly available to be accessed from outside the class. 

// Controversly, what is inside of a struct body is set to public by default and you need to explicity spit the keyword "private:" or "protected:" in order to make it otherwise. 


/*class Dog()
{
protected:
	void Bark()
	{
		cout << "woof!" << endl;
	}
};

Dog dog:
dog.Bark();


class Mut : public Dog
{
	// This class for example will inherit everything from its upper class "Dog" in this instance as being the child class or derived class of the Dog one. Now the "protected" data that are within the Dog class will also be accessible and protected within the Mut class. 	
}*/

#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

	void SetName(string name); // A setter
	string GetName(); // A getter

	float GetHealth();

	void TakeDamage(float damage);

private:
	// This section is set to private which means it can only be accessed within the class local scope or body.
	string Name;
	float Health;

protected:
	int NumberOfLimbs;

};


// Another class derived from Creature
class Goblin : public Creature
{
public: // This must be specified to public when create a child class and need the constructore to be public. 
	Goblin();

	int GetNumOfLimbs(); // A getter to acess the protected varialbe of "NumberOfLimbs"

};

int main()
{
	Creature igor;

	igor.SetName("Igor");

	cout << "Name: " << igor.GetName() << endl;
	cout << "Health: " << igor.GetHealth() << endl;

	cout << "Igor will now take 35 damage!" << endl;

	igor.TakeDamage(35.0);
	cout << "Health: " << igor.GetHealth() << endl;

	Goblin goblin;

	cout << "Goblin name? "  << goblin.GetName() << endl;

	cout << "Goblin number of limbs? " << goblin.GetNumOfLimbs() << endl;


	// igor.Name = "Igor"; // Can't set the name to a value since the variable Name is a private one. 

	system("pause");
}

Creature::Creature()
{
	Health = 100.f;
	cout << "A CREATURE has been created!" << endl;
}

// Start of Setters and Getters
void Creature::SetName(string name)
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}

float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float damage)
{
	float total;
	total = Health - damage;

	if (total <= 0.f)
	{
		cout << GetName() << " has died!" << endl;
	}
	else
	{
		Health -= damage;
	}

}

// End of Setters and Getters


Goblin::Goblin()
{
	cout << "A GOBLIN has been created!" << endl;

	NumberOfLimbs = 5;

	SetName("Gobby");
}

int Goblin::GetNumOfLimbs()
{
	return NumberOfLimbs;
}