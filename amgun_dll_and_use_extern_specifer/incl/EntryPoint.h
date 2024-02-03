#pragma once

extern Application* CreateApp();

int main(int argc, char** argv)
{
	auto app = CreateApp();
	app->Run();
	delete app;
}