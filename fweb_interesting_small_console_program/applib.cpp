#include "applib.h"

int add(int a, int b)
{
	return a + b;
}

double multiply(double a, double b)
{
	return a * b;
}

char* pipecommand(const char *strCmd)
{
	string strReturn = "";
	std::array<char,80> buffer;
	FILE *pipe = _popen(strCmd, "r");
	if(!pipe)
	{
		std::cerr << "cannot open pipe for rading" << endl;
	}
	int c=0;
	while(fgets(buffer.data(), 80, pipe) != NULL)
	{
		c++;
		strReturn.append(buffer.data());
	}
	_pclose(pipe);
	return (char *)strReturn.c_str();
}

void SaySomething(const char *str)
{
	std::cout << "I typed: " << str << endl;
}

void StrCpy(char *dst, const char *src)
{
	std::strcpy(dst, src);
}

void StrCat(const char *str1, const char *str2, char *newstr)
{
	string str = string(str1) + string(str2);
	std::strcpy(newstr, str.c_str());
}