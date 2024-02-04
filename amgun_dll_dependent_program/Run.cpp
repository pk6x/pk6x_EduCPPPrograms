#include "Shared.h"
#include "EntryPoint.h"


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

