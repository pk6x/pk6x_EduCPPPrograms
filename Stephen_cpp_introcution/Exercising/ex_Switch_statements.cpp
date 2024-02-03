#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching,
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovmentSpeed(PlayerStatus P_status, float& speed);

void SwitchOnInt(int i);

int main()
{

	float MovementSpeed;

	PlayerStatus status = PS_Crouching;

	UpdateMovmentSpeed(status, MovementSpeed);

	cout << "Movement speed = " << MovementSpeed << endl; 

	int integer = 1;

	SwitchOnInt(integer);

	system("pause");
}

void UpdateMovmentSpeed(PlayerStatus P_status, float& speed)
{

	switch (P_status)
	{
	case PS_Running:
		speed = RunSpeed;
		break;
	case PS_Walking:
		speed = WalkSpeed;
		break;
	case PS_Crouching:
		speed = CrouchSpeed;
		break;
	default:
		speed = 500.f;
	}

	// if (P_status == PS_Running)
	// {
	// 	speed = RunSpeed;
	// }
	// else if (P_status == PS_Walking)
	// {
	// 	speed = WalkSpeed;
	// }
	// else if (P_status == PS_Crouching)
	// {
	// 	speed = CrouchSpeed;
	// }
}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your number was 0." << endl;
		break;
	case 1:
		cout << "Your number was 1." << endl;
		break;
	case 2:
		cout << "Your number was 2." << endl;
		break;
	default:
		cout << "Your number was not 0, 1 or 2." << endl;

	}
}