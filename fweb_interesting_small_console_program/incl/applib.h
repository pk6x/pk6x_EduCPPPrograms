#ifndef SHARED_LIB_H
#define SHARED_LIB_H

#include <string>
#include <iostream>
#include <array>
#include <windows.h>

using namespace std;

#ifdef __cplusplus
extern "C" {
	#endif

#ifdef BUILD_MY_DLL
#define SHARED_LIB __stdcall __declspec(dllexport)
#else
#define SHARED_LIB __stdcall __declspec(dllimport)
#endif

SHARED_LIB int add(int a, int b);
SHARED_LIB double multiply(double a, double b);
SHARED_LIB void StrCpy(char *dst, const char *src);
SHARED_LIB char *pipecommand(const char *strCmd);
SHARED_LIB void SaySomething(const char *str);
SHARED_LIB void StrCat(const char *str1, const char *str2, char *newstr);

#ifdef __cplusplus
}
#endif

#endif