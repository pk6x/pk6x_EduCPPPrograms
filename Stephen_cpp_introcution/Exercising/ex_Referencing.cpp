#include <iostream>
#include <string>
using namespace std;

// int a_1 = 1;

// int& copy_a = a_1;

// void addOne(int& Num);

void ChangeStr(string& str);

int main()
{
	string myStr = "Druid";

	// string& myRef = myStr;

	// cout << myStr << endl;
	// cout << myRef << endl;

	// myRef += " Mechanics";

	cout << myStr << endl;

	ChangeStr(myStr);

	cout << myStr << endl;
	// cout << myRef << endl;

	// cout << a_1 << endl;

	// addOne(a_1);

	// cout << a_1 << endl;

	// copy_a++;

	// cout << a_1 << endl;

	// cout << copy_a << endl;


	system("pause");
}

void ChangeStr(string& str)
{
	str += "!";
}

/*void addOne(int& Num)
{
	Num * 100;

}*/