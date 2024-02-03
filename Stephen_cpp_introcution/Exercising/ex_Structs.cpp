#include <iostream>
#include <string>

using namespace std;

struct LocationVector
{
	float x;
	float y;
	float z;
};

struct Player 
{
	int Level;
	float Health; 
	float Damage;
	float Stamina;

	LocationVector location = {0.f, 0.f, 0.f};

	void TakeDamage(float dmg)
	{
		Health -= dmg;
	}

	int GetLevel()
	{
		if (Level > 10)
		{
			cout << "Level is greater than 10!" << endl;
		}
		return Level;
	}

	void DisplayLocaton()
	{
		cout << "Location on X = " << location.x << endl;
		cout << "Location on Y = " << location.y << endl;
		cout << "Location on Z = " << location.z << endl;
	}
};

int main()
{

	// First player initialisation
	Player p_1;
	p_1.Level = 200;
	p_1.Health = 100.f;
	p_1.Damage = 10.f;
	p_1.Stamina = 20.f;

	cout << "p_1 Level = " << p_1.GetLevel() << endl;	

	p_1.TakeDamage(40.f);

	cout << "p_1 takes " << 40.f << " damage!" << endl;

	cout << "p_1 Health = " << p_1.Health << endl;

	p_1.DisplayLocaton();

	//Second player initialisation
	Player p_2 = {1, 50.f, 40.f, 35.54f, {35.5f, 65.45f, 100.003f}};

	p_2.DisplayLocaton();

	system("pause");
}