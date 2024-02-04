#ifndef PRINTNAMEONLY_H_
#define PRINTNAMEONLY_H_

#ifdef PRINTNAMEONLY_DLL
#define PRINTNAMEONLY_API __declspec(dllexport)
#else
#define PRINTNAMEONLY_API __declspec(dllimport)
#endif // PRINTNAMEONLY_DLL

namespace PrintNameOnly {
	PRINTNAMEONLY_API void PrintNameOnly(int name);
}

#endif // !PRINTNAMEONLY_H_
