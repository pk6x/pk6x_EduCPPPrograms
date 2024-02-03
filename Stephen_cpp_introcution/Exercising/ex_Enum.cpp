#include <iostream>

enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

enum MovementStatus
{
	MS_Crouched,
	MS_Running
};

int main()
{

	PlayerStatus playerStatus; 
	playerStatus = PlayerStatus::PS_Running;

	MovementStatus movementStatus;
	movementStatus = MovementStatus::MS_Running;

	if (playerStatus == PS_Running)
	{
	std::cout << "The player is running!" << std::endl;
	}

	system("pause");
}

