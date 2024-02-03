#include <iostream>
#include <string>


struct enemyEntity
{
	std::string name;
	int height;
	int strength;

	enemyEntity()
		:name(), height(), strength() {}

	enemyEntity (std::string Name, int Height, int Strength)
		:name(Name), height(Height), strength(Strength) {}

	int PowerUp()
	{
		return this->strength *= 2^100;
	}

	int lvlUp(int sc)
	{
		return this->PowerUp() * sc;
	}

};

int main()
{
	enemyEntity enemyInst;
	enemyEntity* enemy1 = &enemyInst;

	enemy1->name = "Starz";
	enemy1->height = 34;
	enemy1->strength = 29;
	
	std::cout << enemy1->name << "\t" << enemy1->height << "\t" << enemy1->strength << std::endl;

	enemy1->PowerUp();
	std::cout << enemy1->strength << std::endl;

	enemy1->lvlUp(20);
	std::cout << enemy1->strength << std::endl;
	
}
