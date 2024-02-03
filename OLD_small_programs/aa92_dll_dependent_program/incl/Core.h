#pragma once

#ifdef WINDOWS_PLATFORM
#ifdef BUILD_MY_DLL
	#define APP_API __declspec(dllexport)
#else
	#define APP_API __declspec(dllimport)
#endif
#endif