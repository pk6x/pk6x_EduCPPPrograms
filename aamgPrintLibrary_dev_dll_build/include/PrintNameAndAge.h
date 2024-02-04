#ifndef PRINTNAMEANDAGE_H_
#define PRINTNAMEANDAGE_H_

#ifdef PRINTNAMEANDAGE_DLL
#define PRINTNAMEANDAGE_API __declspec(dllexport)
#else
#define PRINTNAMEANDAGE_API __declspec(dllimport)
#endif

namespace PrintNameAndAge {
	PRINTNAMEANDAGE_API void PrintNameAndAge(int age);
}

#endif // !PRINTNAMEANDAGE_H_
