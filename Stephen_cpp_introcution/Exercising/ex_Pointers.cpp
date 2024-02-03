#include <iostream>
#include <string>

using namespace std;

struct Container
{
	string Name;

	int X;
	int Y;
	int Z;	
};

int main()
{
/*	int a = 100;

	int* ptr = &a;

	cout << *ptr << endl;

	int b = 50;

	ptr = &b;

	cout << *ptr << endl;*/

	/*int numbers[] = { 0, 25, 2, 3, 70, 5, 6, 7, 8, 9, 10 };

	int* numbPtr = numbers;

	cout << *numbPtr << endl;

	numbPtr++;

	cout << *numbPtr << endl;

	numbPtr += 3;

	cout << *numbPtr << endl;

*/	

	Container container = {"Sam", 6, 7, 8};

	Container* Ptr_container = &container;

	/*cout << (*Ptr_container).Name << endl; 
	cout << (*Ptr_container).X << endl; 
	cout << (*Ptr_container).Y << endl; 
	cout << (*Ptr_container).Z << endl;*/ 

	// Alternative way to cout a derefrenced pointer (prettier OR syntactical sugar)

	Ptr_container->Name = "The name has been changed!";

	cout << Ptr_container->Name << endl;
	cout << Ptr_container->X << endl;
	cout << Ptr_container->Y << endl;
	cout << Ptr_container->Z << endl;

	system("pause");


}