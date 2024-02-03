#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void Print(int i, string str);

int main()
{

	Print("Hello World");

	Print(3);

	Print("My string one!", "My string two!");

	Print(4, "a string");

	int myInt = 1;
	string myStr = "Alan";
	string mySecondStr = "Jones";

	Print(myStr);
	Print(mySecondStr);
	Print(myInt);
	Print(myInt, mySecondStr);

	system("pause");
}

// Functions

void Print(string str)
{
	cout << str << endl;
}

void Print(int i)
{
	cout << i << endl;
}

void Print(string str1, string str2)
{
	cout << "String 1: " << str1 << endl;
	cout << "String 2: " << str2 << endl;
}

void Print(int i, string str)
{
	cout << "Integer value: " << i << endl;
	cout << "String value: " << str << endl;
}