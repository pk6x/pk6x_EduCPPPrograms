#include "Shared.h"
#include "EntryPoint.cpp"


class Launcher : public Application
{

public:
	Launcher()
	{

	}

	~Launcher()
	{

	}

};


Application* CreateApp()
{
	return new Launcher();
}

