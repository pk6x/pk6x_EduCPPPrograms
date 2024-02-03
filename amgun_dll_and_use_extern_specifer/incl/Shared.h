#pragma once

#include "Core.h"

class APP_API Application
{
public:
	Application();
	~Application();
	void Run();

};

Application* CreateApp();

// void Application::Run()
// {
// 	while(true) { std::cout << "Running..." << std::endl;};
// }